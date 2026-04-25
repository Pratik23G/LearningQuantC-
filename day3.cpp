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

/* 
A bad example of copy-semantics is when user makes 
2 vectors and returns std:: vector by value
because C++ uses temporary operator and doing
copy semantics is not optimal

std:: vector<int> generate(){
    std:: vector arr1{1,2,3,4};

    return arr1;
}

int main(){
    std:: vector arr2 { generate() };

    arr2[0] = 7;

    std:: cout << arr2[0] << "\n";

    return 0;

}

In this example, std:: vector allocates a memory in 
heap and generate function creates a temporary operator to
hold rvalues of {1, 2, 3, 4} and store it once we hit ; the value
gets destroyed but because arr1 here which uses copy constructor 
is lvalue and is also later used in main, C++ uses temporary vector
to store the generate() vector function's value for short time.
Once we are in main, arr2 makes a copy and once its initialization 
is done generate() value gets destroyed , so it becomes cost expensive

*/


