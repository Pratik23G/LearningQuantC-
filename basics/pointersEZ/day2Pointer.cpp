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

    return 0;
}