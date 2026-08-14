#include <iostream>
#include <string_view>

std::string_view findBool(bool b)
{
    if(b){
        return "true";
    }
    else {
        return "false";
    }
}

std::string_view firstAlphabetical(std::string_view s1, std::string_view s2)
{
    if (s1 < s2){
        return s1;
    }
    return s2;   
}

int main()
{   
    std::cout << findBool(true) << " " << findBool(false) << "\n";
    std::string a {"Hello"};
    std::string b {"Worlds"};
    std::cout << firstAlphabetical(a, b) << "\n";
    return 0;
}