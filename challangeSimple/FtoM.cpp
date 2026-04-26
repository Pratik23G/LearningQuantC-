#include<iostream>

int main()
{
    double userFeetInMeter { };
    double oneFeet {1 / 3.28};
    
    std::cout << "Please enter you height in feets: ";
    std::cin >>userFeetInMeter;

    std::cout << "Your total height is: " << oneFeet * userFeetInMeter << " meters " << "\n";

    return 0;

}