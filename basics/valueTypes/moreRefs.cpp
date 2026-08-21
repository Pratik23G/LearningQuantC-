/* 
Today I learnt about the cheap to copy concept and when should we avoid copying by value
and prefer using references.

GOOD TO copy -> enumerated values, std::string_views, std::span, types with mimicing references
or pointers (std::reference_wrapper). Cheap copy class types, eg std::pair, std::optional, std::expected

GOOD TO reference -> uncopyable types (std::ostream), argumnets that constantly get modified by
the function, types where copying has ownership implications eg. std::unique_ptr, std::shared_ptr
types with virtual functions or types that have inheritance properties

*/

// a good rule of thumb when a argumanet is cheap to copy is when its fewer than 2 words
/* 

Here the words define the size of the memory address, the less the better

*/

//example of learncpp.com which has a macro function figuring out when is it cheap to copy or not?

#include<iostream>

//function which tells true or false if the type is equal to or smaller than size of two memory address
#define isSmall(T) (sizeof(T) <= 2 * sizeof(void*))

struct S
{
    double a;
    double b;
    double c;
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << isSmall(int) << "\n";

    double d {};
    std::cout << isSmall(d) << "\n";
    std::cout << isSmall(S) << "\n";

    return 0;
}