#include<iostream>

int main()
{
    int x { 2'147'483'647 };
    std::cout << x << "\n";

    x = x + 1;
    std::cout << "this will be integer overflow and value is unpredictable: " << x << "\n";

    std::cout << "The fix to this would be using a different version of signed int " << "\n";
    long x_ch { 2'147'483'647 };
    std::cout << x_ch + 1 << "\n";

    return 0;
}