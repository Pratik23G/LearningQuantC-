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

    //also like integral values 0 and non zero values null pointers 
    // also convert themselves to boolean values True or False

    int y { 3456 };

    int* nonNullPtr { &y };

    if(nonNullPtr)
    {
        std::cout << "Non null ptr: True" << "\n";
    }else {
        std::cout << "Null ptr: False" << "\n";
    }

    int* nullPtr {};
    std::cout << "null pointer is " << (nullPtr ? "non-Null Ptr" : "Null pointer") << "\n";


    //Null pointers are great to tackle dangling pointers
    if(nullPtr) {
        std::cout << *nullPtr << "\n";
    }else {
        std::cerr << "Its a null pointer and dangling pointer address is hard to dereference" << "\n";
    }
    return 0;
}