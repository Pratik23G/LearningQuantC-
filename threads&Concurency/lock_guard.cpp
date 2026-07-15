#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

std::mutex gLock;
static int shared_value = 0;

void shared_value_increment() {
    std::lock_guard<std::mutex> lockGuard(gLock);
        try{
            shared_value = shared_value + 1;
            throw "dangerous...abort";
        }
        catch(...){
            std::cout << "handle exception" << "\n";
    
            return;
        }
}
int main(){

    /* auto lambda=[](int x){
        std::cout << "Hello from Lambda Thread" << " " << std::this_thread::get_id() << std::endl;
        std::cout << "Arhument passed in:" << x << std::endl;
    }; */

    std::vector<std::thread> threads;

    for(int i{0}; i < 100; i++){
        threads.push_back(std::thread(shared_value_increment));
    }

    for(int i{}; i < 100; i++){
        threads[i].join();
    }
    
    std::cout << "shared value: " << shared_value << std::endl;
    return 0;
}