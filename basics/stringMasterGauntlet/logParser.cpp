#include <iostream>
#include <string>
#include <string_view>

std::string_view extractLevel(std::string_view line)
{
    pos = line.find('|');
    length = line.substr(0, pos)
    
}

std::string_view extractMessage(std::string_view line)
{

}


int main()
{
    constexpr int MAX_LEN { 200 };
    constexpr std::string_view SEPARATOR { "|" };
    
    auto level { extractLevel(std::string_view line) };
    auto message { extractMessage(std::string_view line) };

    cout << "Level: " << level << "Message: " << message << "\n";
    return 0;
}