#include<iostream>

#define isLargeThanPointer(T) (sizeof(T) > sizeof(void*))
#define typeOf(T) (sizeof(T))

struct P
{
    int x;
    int y;
};

struct DP
{
    double len;
    double width;
    double height;
    double zones;
};

int main()
{
    std::cout << std::boolalpha;

    std::cout << isLargeThanPointer(char) << "\n";
    std::cout << isLargeThanPointer(P) << "\n";
    std::cout << isLargeThanPointer(DP) << "\n";

    std::cout << typeOf(char) << "\n";
    std::cout << typeOf(P) << "\n";
    std::cout << typeOf(DP) << "\n";

    return 0;
}