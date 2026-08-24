/* 

I found that any pointers we will cover so far are called dumb pointers or raw pointers

Any pointers which are uninitialized are called wild pointers and holds a lot of garbage

Good tip: If you want to have multiple pointers of same reference types we need to make sure
each one of them have the asterisk sign,.i.e. *

Good - int* x1, * x2;
Bad - int* y1, y2;
Here y2 will be treated as a normal int

*/

#include<iostream>

int main()
{
    int* x { nullptr }; // Garbage pointer or wild pointer

    int* a {}; // a null ptr will cover later

    int y { 5 };

    int* access { &y }; //here access acts as a pointer to y's memory address
    //meaning it points the number holding y's memory address

    std::cout << x << "\n" << a << "\n";
    std::cout << *access << "\n"; // de-reference the value access is pointing to
    // using the * operator

    // Now we will look at 2 cases of pointers assignment
    /* 
    1) Change what the pointer is pointing at (assign pointer a new address)
    */

    int z { 5 };
    int* ptr { &z };

    std::cout << *ptr << "\n"; // gives value 5 as pointer dereferences the value its pointed

    int u { 7 };
    ptr = &u;

    std::cout << *ptr << "\n"; // now prints out 7 instead of 5 prints value address is being pointed at
    

    return 0;
}