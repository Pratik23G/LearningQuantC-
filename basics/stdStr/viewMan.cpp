/* 

Today I learned about std::string_view which is helpful
to view a C-style string, std::string or std::string_view
in read only mode without having to do extra work to
make a copy in the memory and destroy once the string is read
This cool feature came in c++17 to avoid the whole hassle of memory
allocation to make a copy of its initializer
*/

#include <iostream>
#include <string>
// Do not forget the include of string_view here !!! Like me
#include <string_view>

// GOOD if you want to view or read out contents no need 
// for extra memory allocation
void printStr(std::string_view strMan)
{
    std::cout << strMan << "\n";
}

//BAD make a copy for something to just read from the initializer
void badReadStr(std::string strG)
{
    std::cout << strG << "\n";
}

int main()
{

    //bad and expensive because we are repeating the same mistake
    std::string s1 { "The Hype is Real, but expesnive" };
    std::cout << s1 << "\n";

    //GOOD its a read only of s2's initializer using cout
    // so no need to make an extra memory allocation just for that
    std::string_view s2 { "The hype is not expected but its acheiveable" };
    std::cout << s2 << "\n";

    std::string_view gg {"GOAT"};
    printStr(gg);

    std::string hh {"IMPOSTER"};
    printStr(hh);

    return 0;
}