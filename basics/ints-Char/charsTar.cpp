#include<iostream>

// chars are really cool as well, NGL when you use chars
// you can literally do simple stuffs replacing ints 
// b/c chars are like 8 bits holding upto -127 to 127 for signed
// and 0 to 128 for unsigned.
int main()
{
    //This example is a simple charcater print using char
    

    for(char letter { 'A' }; letter <= 'Z'; letter++)
        std::cout << letter << "\n";
    

    return 0;
}