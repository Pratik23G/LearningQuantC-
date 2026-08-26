/* Less time so just a brief introduction to null pointers and how it works

A pointer besides pointing to an address can hold to a null value,
it means that the pointer is not pointing to anything
Such pointer is called null pointer

*/
//simple null-ptr example

#include<iostream>

int main()
{
    int* ptrNull { }; // simple null pointer

    //like true false Boolean literals nullptr represents the Null pointer's 
    //literal

    int value { 6 };
    int* ptr2 { &value };
    ptr2 = nullptr; // can assign nullptr to an exisiting ptr make it null ptr
    
    return 0;
}