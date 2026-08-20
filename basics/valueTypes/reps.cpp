#include <iostream>

void swapInts(int& a, int& b)
{
    int temp { a };
    a = b;
    b = temp;
}

int main()
{
    int a { 4 };
    int b { 5 };

    std::cout << "Swapped ints: " << a << "\n"; 
    std::cout << "Swapped ints: " << b << "\n"; 

    swapInts(b, a);

    std::cout << "Swapped ints: " << a << "\n";
    std::cout << "Swapped ints: " << b << "\n"; 
    return 0;
}