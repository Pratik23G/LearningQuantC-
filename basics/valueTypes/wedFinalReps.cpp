#include <iostream>

void Swap(int* a, int* b)
{
    int temp { (*a) };
    (*a) = (*b);
    (*b) = temp;
}


int main()
{

    int x { 10 }, y { 20 };
    std::cout << x << "\n";
    std::cout << y << "\n";

    std::cout << "After swap: " << "\n";

    Swap(&x, &y);

    std::cout << x << "\n";
    std::cout << y << "\n";

    return 0;
}