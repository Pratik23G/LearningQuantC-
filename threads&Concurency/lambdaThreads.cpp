#include<iostream>
#include<thread>

int main(){

    auto lambda=[](int x){
        std::cout << "Hello from Lambda" << std::endl;
        std::cout << "Arhument passed in:" << x << std::endl;
    };

    std::thread myThread(lambda, 110);
    myThread.join();

    std::cout << "Hello from my main thread" << std::endl;
    return 0;
}