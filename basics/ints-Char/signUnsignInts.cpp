#include<iostream>

int main() {

    short int i { };
    short unsigned int j { 60000 };

    i = j;

    std:: cout << i << " " << j << "\n";

    /* 
        The reason the output prints a negative value for signed int i is b/c
        it can take both positive and negative values and signed ints use 
        sign-flag and if they see high order value as 1 they assume the numbers
        would be negative so they flip the bits so 1 becomes 0, 0 becomes 1 and
        add 1 at the next step. So the resulting value is negative.
    */
    return 0;
}