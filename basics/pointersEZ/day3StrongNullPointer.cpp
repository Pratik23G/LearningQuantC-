/* 

Pointers work like lvalue references but only difference is that the pointers need to 
do extra work to store memoty addresses that require handling errors and syntax's

*/

#include <iostream>
#include <typeinfo>

int main()
{
    int x { 7 };

    int& ref { x }; // lvalue reference initilaization

    int* ptr { &x }; // a ptr initialization

    std::cout << x;
    std::cout << ref;
    std::cout << *ptr << "\n";

    //now change the value using the lvalue reference
    std::cout << "Change by l-value reference" << "\n";
    ref = 8;
    std::cout << x;
    std::cout << ref;
    std::cout << *ptr << "\n";

    //change using the ptr change at value method
    std::cout << "Change by pointer pointing at different value" << "\n";
    *ptr = 9;
    std::cout << x;
    std::cout << ref;
    std::cout << *ptr << "\n";

    int varX { 8 };
    std::cout << typeid(varX).name() << "\n";
    std::cout << typeid(&varX).name() << "\n";

    // cool things abhout size of pointers is that it depends on the architecture its being processed or compiled
    /* 
    
    For a 32 bit archicture a pointer has 32 bits or 4 bytes of storage

    for 64 bits its 8 bytes or 64 bits
    
    */
    
    char* charPtr {};
    int* iPtr{};

    long double* ldPtr {};

    std::cout << sizeof(charPtr) << "\n";
    std::cout << sizeof(iPtr) << "\n";
    std::cout << sizeof(ldPtr) << "\n";

    return 0;
}