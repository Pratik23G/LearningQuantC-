#include <iostream>
#include <string>
#include <string_view>

constexpr int MAX_LEN { 200 };
constexpr std::string_view SEPARATOR { "|" };
constexpr auto SCORE_ERROR { 3 };
constexpr auto SCORE_WARN { 2 };
constexpr auto SCORE_INFO { 1 };
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

constexpr int severityScore(std::string_view level)
{
    if( level == "ERROR") {
        return SCORE_ERROR;
    } else if (level == "WARN") {
        return SCORE_WARN;
    } else if (level == "INFO") {
        return SCORE_INFO;
    } else {
        return 0;
    }
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
    auto severity  { severityScore(level) };

    std::cout << "Level: " << level << "\n" << "Severity: " << severity << "\n" 
        << "Message: " << message << "\n";
    return 0;
}