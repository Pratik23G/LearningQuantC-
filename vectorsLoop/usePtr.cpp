#include<iostream>
#include<vector>

/* 
This example uses ptr_diff for large number of arrays.
When to use?
Wby default we use int for most of the signed for loops,
when we do not consider for the size of the array, but 
when we do, we use ptr_diff for large arrays and when we
need to be a bit more defensive.We can also create our
own type alias for storing large arrays indices using 
ptrdiff_t
*/

int main() {
    std::vector arr23 {23, 45, 67, 90, 1000, 1009, 1434, 928, 3987,
        894, 45, 45, 498, 1001};
    using Index = std::ptrdiff_t;

    for (Index index { 0 }; index < static_cast<Index>(arr23.size()); ++index){
        std::cout << arr23[index] << ", ";
    }
    
    return 0;
}