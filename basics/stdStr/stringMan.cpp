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
    return 0;
}