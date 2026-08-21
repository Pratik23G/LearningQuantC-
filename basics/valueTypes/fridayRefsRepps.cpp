#include <iostream>

#define isLessThanPointer(T) (sizeof(T) <= 2 * sizeof(void*))
#define isEqualToPointer(T) (sizeof(T) == sizeof(void*))

struct Cheap
{
    int x;
    int y;
    double z;
    double a;
};

struct Expensive
{

    double c;
    double d;
    double e;
    double f;
};

int main()
{
    std::cout << std::boolalpha;

    std::cout << isLessThanPointer(char) << "\n";
    std::cout << isLessThanPointer(Cheap) << "\n";
    std::cout << isLessThanPointer(Expensive) << "\n";

    std::cout << isEqualToPointer(char) << "\n";
    std::cout << isEqualToPointer(Cheap) << "\n";
    std::cout << isEqualToPointer(Expensive) << "\n";

    return 0;
}