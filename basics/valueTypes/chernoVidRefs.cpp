#include<iostream>


void Increment(int* val)
{
    (*val)++;
}

int main()
{
    int a { 5 };
    int* b { &a };
    Increment(&a);
    int& ref { a };
    std::cout << "Increment " << a << "\n";
    ref = 2;
    std::cout << a << "\n";
    std::cout << "Address: " << b << "\n";
    std::cout << "Ref " << ref << "\n";
    return 0;
}