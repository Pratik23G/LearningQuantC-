#include <iostream>
#include <thread>
#include <chrono>
#include <syncstream>


int main()
{

    auto lambFuncThread=[](std::stop_token token, int id){
        while(true) {
            if(token.stop_requested()) {
                std::osyncstream(std::cout) << "Worker " << id << "received a stop sign, Exiting!\n";
                break;
            }

            std::osyncstream(std::cout) << "Worker" << id << "is processing data ...\n";

            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    };

    std::osyncstream(std::cout) << "Main thread: Starting worker ...\n";
    {
        // 4. Launch the jthread. Note: You do NOT pass the token manually. 
        // C++ automatically injects the stop_token for you!
        std::jthread t1(lambFuncThread, 42);

        // 5. Let the main thread sleep for 1 second (1000 milliseconds)
        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::osyncstream(std::cout) << "Main thread: Block ending, destroying jthread now...\n";
    } // <--- RAII MAGIC HAPPENS HERE!

    std::osyncstream(std::cout) << "Main thread: Finished cleanly!\n";
    return 0;
}