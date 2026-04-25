#include<iostream>

struct Vector1 
{
    float x, y;
};

struct VectorD
{   
    union
    {
        struct {
            float x, y, z, w;
        };
        struct 
        {
            Vector1 a, b;
        };
        
    };
};

void PrintVector1(const Vector1& vector)
{
    std::cout << vector.x << " , " << vector.y << std::endl;
}

int main() 
{  
    
    /*  struct Union
    {
        union
        {
            float a;
            int b;
        };
    };

    Union u1;

    u1.a = 2.0f;

    std::cout << u1.a << " , " << u1.b << "\n"; */
    // std::cin.get();

    VectorD vectorsAw { 1.0f, 2.0f, 3.0f, 4.0f};
    PrintVector1(vectorsAw.a);
    PrintVector1(vectorsAw.b);

    std::cout << "-------------------" << "\n";
    vectorsAw.z = 500.0f;
    PrintVector1(vectorsAw.a);
    PrintVector1(vectorsAw.b);
    
    return 0;
}