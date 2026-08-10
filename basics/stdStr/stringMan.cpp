/* 

We will talk about std::string

*/

#include<iostream>
#include<string>
int main()
{   
    // Iinitialize name with String Literal Alex
    std::string name { "Alex" };
    std::cout <<  "My name is printed in std::String way not C-style way" << name << "\n";

    // now we will learn about string cool features like taking inputs and changing
    // in lengths strings can take limited lengths that is why we use dynamic memory
    // allocation for strings

    std::cout << "Please enter your Name: " << "\n";
    std::string userName;
    std::getline(std::cin >> std::ws, userName);

    std::cout << "Please enter your favorite color: " << "\n";
    std::string favColor;
    std::getline(std::cin >> std::ws, favColor);

    std::cout << " Hi " << userName << " Your recorded color is " << favColor << "\n";
    return 0;
}