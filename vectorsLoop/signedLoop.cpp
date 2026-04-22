#include<iostream>
#include<vector>

/* 
The following code is an example usage of auto signed for loop
where the compiler deduces the type, and uses ptrdiff_t for large
arrays.
*/

int main(){
    std::vector arr1 {2, 4, 5, 7, 12, 13, 35, 40, 289, 900, 1000};
    for (auto index {static_cast<std::ptrdiff_t>(arr1.size()) - 1}; index >=0; --index)
    {
        std::cout << arr1[index] << "\n";
    }

    return 0;
}