#include <iostream>
#include <thread>

void testFunc(int x){
    std::cout << "Hello from thread" << std::endl;
    std::cout << "Argument passed in: " << x << std::endl;
}

int main(){

    std::thread myThread(&testFunc, 100);
    myThread.join();
    std::cout << "hello from my main thread" << "\n";
    return 0;
}