/* 

For todays practice I am learning about pass by reference and how it can be useful for
tasks like std::string and other class types which when done through pass by reference is 
a bit expensive.

*/

#include<iostream>
#include<string>

void printHello(std::string& x)
{
    std::cout << x << "\n";
}

void addressPrint(int val, int& ref)
{
    std::cout << "The address of value is: " << &val << "\n";
    std::cout << "The address of reference is: " << &ref << "\n";
}

void printMessageVal(std::string userMessage, int countY)
{
    for(int i {}; i < countY; i++)
    {
        std::cout << userMessage << "\n";
    }
    countY = 0 ;
}

void printMessageRef(std::string& userMessage, int& countX)
{
    for(int i {}; i < countX; i++)
    {
        std::cout << userMessage << "\n";
    }

    countX = 0;
}

/* 

Here is more about pass by const lvalue reference

It works with any type of argument when theres a reference parameter
const

*/

void printRef(const int& y)
{
    std::cout << y << "\n";
}

void processStockPrice(const double& rates)
{
    std::cout << "Rates in Decimal points: " << rates << "\n";
}

int main()
{   

    std::string x { "Hello World, Reference Magic " };

    printHello(x);

    //One cool thing about pass by reference is that, in
    // value parameter is treated as a separate object than argument
    // but in reference it is as if it were the argument so when 
    // we pass by value the memory address is diff so ti make it identical
    // we would have to make a copy into the memory which is expensive

    int y { 6 };

    std::cout << "The address of x value is: " << &y << "\n";

    addressPrint(y, y);

    /* 
    
    Pass by reference also helps us out to change the value of argument
    while pass by value is a copy of its own so any changes made by 
    value does no effect on argument, Here is an example with printing Hello world, how many times.
    
    */
    std::string userResponse { "This is hello world message being Printed" };
    int count { 2 };
    printMessageVal(userResponse, count);
    printMessageRef(userResponse, count);


    //lets test the printRef const reference with some examples for modifiable
    // non-modifiable lvalue and rvalue literals too
    
    //modifiable lvalue
    int testC { 4 };
    printRef(testC);

    //non-modifable lvalue
    const int zZone { 50 };
    printRef(zZone);

    //rvalue literal
    printRef(5);

    //However if the types do not match the const reference can siletly make a temporary copy
    // which can be expensive to consider similar like regular pass by value
    double stockRate { 32.0 };
    processStockPrice(stockRate); // This line siletly makes a temp copy of int -> double conversion

    return 0;
}