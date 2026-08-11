#include <iostream>
#include <string>

bool isValidLength(const std::string& name) {
    if (static_cast<int> (name.length()) >= 3 && static_cast<int> (name.length()) <= 15) {
        return true;
    }

    return false;
}

int main()
{

    std::cout << "Enter a userName: " << "\n";
    std::string userName;
    std::getline(std::cin >> std::ws, userName);

    int userLength { static_cast<int>(userName.length()) };

    std::cout << "The required length user entered for their name is: " << userLength << "\n";

    std::cout << "Valid username? " << (isValidLength(userName) ? "Yes" : "No") << "\n";

    return 0;
}