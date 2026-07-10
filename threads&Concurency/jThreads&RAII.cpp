#include <iostream>
#include <thread>
#include <vector>

int main()
{
    auto lambda=[](int x){
        std::cout << "Hello form Lambda thread " <<std::this_thread::get_id() << std::endl;
        std::cout << "Argument passed in: " << x << std::endl;
    };

    std::vector<std::jthread> jthreads;
    for(int i{}; i < 10; i++){
        jthreads.push_back(std::jthread(lambda, i));
    }

    std::cout << "The main thread is this and works too!" << std::endl;
    return 0;
}