/* 
Today  we will learn about constant expressions and how to use them properly
They force the compiler to run program compile time using compared 
to standard as if rule.
*/

#include<iostream>
#include<array>
int main()
{
    int x { 10 };
    int y { 20 };

    int result = x + y;

    constexpr int a { 20 };
    constexpr int b { 30 };
    constexpr int resultForce { a + b };

    std::array<int, 1> Result;

    Result[0] = resultForce;

    std::cout << result << "\n";
    
    std::cout << "Array successfully created with element: " << Result[0] << "\n";
    return 0;
}