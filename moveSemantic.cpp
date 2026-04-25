/* 
Move semantics are a good choice 

1) when the object supports move
2) The move isn't elided
3) The object is being intitliazed with an rvalue of the same type


*/

// let us look at an example

/* 
The following example is passing 
class type function and returning a 
different value back

*/

#include<iostream>
#include<vector>

std::vector<int>doSomething(std::vector<int> v2){
    
    //step3: Constructing value to be returned
    std::vector v3 {v2[0] + v2[0]};
    
    //step4: returning value back to the caller
    return v3;
}

int main(){

    //step1: initialize construtor with vector value to be passed
    std:: vector v1{5};

    //step2: passing vector value in the function doSomething
    std:: cout << doSomething(v1)[0] << "\n";

    std:: cout << v1[0] << "\n";

    return 0;
}