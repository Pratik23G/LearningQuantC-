/* 

Pointers work like lvalue references but only difference is that the pointers need to 
do extra work to store memoty addresses that require handling errors and syntax's

*/

#include <iostream>

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

    return 0;
}