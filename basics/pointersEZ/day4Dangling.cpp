/*  

This is a quick insights on how dnagling pointers work as
they are basically holding address memory of an address that is already
destroyed so meaning it would lead to undefined value.

Surprisingly dangling pointers ahve 3 tiers:
Dereference (WORST) *ptr-> Go to invalid address and read/write undefined behavior

ASSIGN new value
ptr = nullptr - > Replace bad address with new one (Implementation is a bit safer)

Copying ptr or incrementing ptr++ 
-> Uses the bad address itself in calculations (Implementation defined)
*/

#include <iostream>

int main()
{
    int x { 7 };
    int* ptr { &x };

    std::cout << *ptr << "\n";
    {
        int y { 8 };
        ptr = &y;
        std::cout << *ptr << "\n";
    }

    //dereference of yPtr dangling reference
    std::cout << *ptr << "\n"; // undefined behavior

    //incrementong it is another implementation but uses bad address
    std::cout << ptr + 1 << "\n";
    std::cout << *ptr++ << "\n";

    //assignment to nullptr a bit safer

    ptr = nullptr;
    if(ptr != nullptr){ 
        std::cout << *ptr << "\n";
    }else {
        std::cerr << "Cannot print this its segmentation fault.NULLPTR!!!" << "\n";
    }

    return 0;
}