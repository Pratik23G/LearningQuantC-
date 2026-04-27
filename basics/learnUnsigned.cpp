#include<iostream>

int main()
{   
    std::cout << R"(Unsigned bits are different story than signed bits
                    They have range starting from 0 to (2^n)-1, also by
                    C++ convention we avoid using it, it only works in 
                    small or specific cases which we will look later, maybe
                    tomorrow for reference but for today justa ssume it is not
                    good to use)" << "\n";

    std::cout << "The below example gives random overflowed arithmetic value using unsigned" << "\n";
    unsigned int x1 { 3 };
    unsigned int x2 { 4 };

    std::cout << x1 - x2 << "\n";
    
    return 0;

}