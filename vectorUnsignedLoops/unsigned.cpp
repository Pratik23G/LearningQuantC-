/* 
Using size_type is always lengthy and hectic
because usually our size_type in C++ is unsigned
type and because standard array library uses,
usigned type so, it is natural to using unsigned
indices but it can be lengthy !!!

ex:
for (static_cast<std::vector<int>::size_type index { 0 }; index < arr.size(); ++index)
{
..... rest of the code
}

This is very lengthy and hard to remember. So 2 options:

1) Using type indices alliaces

code example:
using arrayi = std::vector<int>
for (arrayi::size_type index { 0 }; index < arr.size(); ++index)
{
...
}

Honestly looks better but still uses and size_type
2) USing decltype

for (decltype(arr)::size_type index { 0 }; index < arr.size(); ++index)

*/

#include<iostream>
#include<vector>
#include<typeinfo>

int main(){

    std::vector array1 {12, 23, 35, 56, 78};

    for (decltype(array1)::size_type index { }; index < array1.size(); ++index){
        std::cout << array1[index] << ", ";
    }

    return 0;
}