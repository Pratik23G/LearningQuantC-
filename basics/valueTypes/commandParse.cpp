#include<iostream>
#include<string_view>

const std::string_view SEPARATOR { ":" };
std::string_view getAction(std::string_view command)
{
    size_t pos { command.find(SEPARATOR) };
    return command.substr(0, pos);
}

std::string_view getTarget(std::string_view command)
{
    size_t pos1 { command.find(SEPARATOR, 0) };
    size_t pos2 { command.find(SEPARATOR, pos1 + 1) };
    return command.substr(pos1 + 1, pos2 - pos1 - 1);
}

int main()
{
    std::string_view command { "SET:FAN:HIGH" };
    std::cout << getAction(command) << "\n";
    std::cout << getTarget(command) << "\n";
    return 0;
}