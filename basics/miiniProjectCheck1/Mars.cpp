#include<iostream>
#include<cmath>

int main()
{
    double distance { 34000000 };
    double lightSpeed { 186000 };

    double delay { distance / lightSpeed};

    double delayInMin { delay / 60 };

    std::cout << "The distance between Mars and Earth is " << distance << " miles/second" << "\n";
    std::cout << "The delay in radio signal leaving from Earth to reach Mars is " << delay << " seconds" << "\n";
    std::cout << "The same delay in radio signal in minutes is " << delayInMin << " mins" << "\n";

    return 0;
}