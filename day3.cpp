/* 

Vectors std::vector are usually passed by reference using const
to avoid making excessive copies of the vector but we can also
return std::vector by value

*/

//example with 2 independent vector making copies

#include <iostream>
#include <vector>

int main(){

    std:: vector arr1{1, 2, 3, 4, 5};
    std:: vector arr2 = arr1;

    std:: cout << arr1[0] << arr2[3] << "\n";

    return 0;
}