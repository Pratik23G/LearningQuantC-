#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{   
    int var { 8 };
    //typeless pointer with memory address of 0
    void* ptr { &var };
    std::cin.get();

    LOG(*(static_cast<int*>(ptr)));
    LOG(ptr);

    return 0;
}