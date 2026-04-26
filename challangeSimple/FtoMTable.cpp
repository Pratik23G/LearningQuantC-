#include<iostream>

int main()
{
    int counter { };

    double meters { };

    double feet { };

    std::cout << "-------------------------------" << "\n";

    for(feet = 1.0 ; feet <= 100.0; feet++)
    {
        meters = feet / 3.28;
        std::cout << feet  << " , feet " << " for, " << meters << " meters." << "\n";

        counter++;
        
        if(counter == 10)
        {
            std::cout << "\n";
            counter = 0;
        }
    }

    std::cout << "-------------------------------" << "\n";

    return 0;
}