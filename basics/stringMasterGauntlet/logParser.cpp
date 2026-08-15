#include <iostream>
#include <string>
#include <string_view>

constexpr int MAX_LEN { 200 };
constexpr std::string_view SEPARATOR { "|" };

std::string_view extractLevel(std::string_view line)
{
    auto pos { line.find(SEPARATOR) };
    return line.substr(0, pos );    
}

std::string_view extractMessage(std::string_view line)
{
    auto pos { line.find(SEPARATOR) };
    return line.substr(pos + 1);
}


int main()
{
    std::string line;
    std::getline(std::cin >> std::ws, line);

    if(static_cast<int>(line.length()) > MAX_LEN)
    {
        std::cout << "The length of parsing is long please chunk it properly " << "\n";
        return 1;
    }

    auto level { extractLevel(line) };
    auto message { extractMessage(line) };

    std::cout << "Level: " << level << " " << "Message: " << message << "\n";
    return 0;
}