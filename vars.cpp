#include <iostream>

int main()
{   
    std::cout << R"(In this tutorial we will talk about Basic var types in C++
                A variable is a portion of memory to store a value 
                An identifier is a way to write your variable names,
                But you cannot have keywords as your created identifiers
                Examples like: for, if, while, else, int, double, float, true, false, do, not, break etc.
                )"
            << "\n";

    std::cout << "A variable is a portion of memory to store a value" << "\n";

    // here are some ways to reperesent values in c++
    std::cout << "The below given syntax is a way to define c-like variables" << "\n";
    int x = 0;

    std::cout << "This is second option is called constructors initialization" << "\n";
    int y (0);

    std::cout << "Finally this was introduced from C++11 which is also called uniform initialization" << "\n";
    int sum { 0 };

    std::cout << "The values are: " << x << " ," << y << " ," << sum << "\n";

    // also if we are not sure about variable types we can use auto or decltype
    std::cout << "auto helps us find the varible typoe for the new variable initialized" << "\n";
    int foot = 90;
    auto finalScore = foot;

    std::cout << "Similarly if we do not have a varible initialized we can do type decudtion with decltype" << "\n";
    int scores = 100;
    decltype(scores) scoreP { scores };
    

    std::cout << "The values are: " << finalScore << ", " << scoreP << "\n";

    return 0;
}