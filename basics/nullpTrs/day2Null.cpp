#include<iostream>

int main()
{

    int* pointer = nullptr;
    int x = 1234;

    pointer = &x;
    
    if(pointer != nullptr)
    {
        std::cout << "The address was assigned: " << pointer << "\n";
    }else {
        std::cout << "Address was not assigned" << "\n";
    }

    return 0;
}