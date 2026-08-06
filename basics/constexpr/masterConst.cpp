/* 
This tutorial I learned that any variable whose
initializer is not constant expression we use const

        BUT

Any initializer that has a constant expression than we
use constexpr
*/

#include<iostream>

constexpr int helpNum() { return 5; };
int main(){

    constexpr int sum { 4 + 5 };
    constexpr int res { };
    constexpr int f { helpNum() };

    std::cout << "Initailizer is constant expression:" << sum << "\n";
    std::cout << "Initializer with zero value constant expression: " << res << "\n";

    std::cout << "This is constexpr function return on compile time:" << helpNum() << "\n";
    std::cout << "This one is clone of it calling the same function constexpr: " << f << "\n";
    return 0;
}
