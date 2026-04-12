/* 
Vectors in C++ can be passed as value and by reference,
when we pass by value we are making a copy of the vectors making 
it hard to keep track of expensive copies.

Thus we pass by (const) std:: vector reference to avoid
such storage issues

*/

#include<iostream>
#include <vector>

template <typename T>
void passRef(const std::vector <T>& arr){
    std::cout << arr[0] << std::endl;
}

void getNumbersRef(const std:: vector<int> &arr){
    std::cout << arr[0] << std::endl;
}

int main(){

    std:: vector <int> numbersEven{2, 4, 6, 8, 10};
    std:: vector dbl{1.2, 3.4, 6.5, 0.9};

    getNumbersRef(numbersEven);

    passRef(dbl);

    return 0;
}

//However, if we had a new parameter type in theh function main,
// the getNumberRef() function would not work

/* 
Bad example:

void getNumbersRef(std:: vector<int> &arr){
    std::cout << arr[0] << std::endl;
}

int main(){
    std::vector primes {7, 11, 13, 17};

    std::vector Dbl{2.0, 4.5, 6.5};

    getNumbersRef(primes); // works b/c it has same parameter type <int>

    getNumbersRef(Dbl); // this becomes an error b/c int and float aren't the 
    same type
    return 0;

}

You can try to use CTAD (Class Template Argument Deduction) but it only
works with vectors initializers when defined but it does not work
on functions.

meaninng. Another example with CTAD(Class Template Argument Deduction)

#include <iostream>
#include <vector>

void passByRef(const std::vector& arr) // compile error: CTAD can't be used to infer function parameters
{
    std::cout << arr[0] << '\n';
}

int main()
{
    std::vector primes{ 2, 3, 5, 7, 11 }; // okay: use CTAD to infer std::vector<int>
    passByRef(primes);

    return 0;
}

*/
// ==========================================================
// A solution to this would be using "Function Templates"!!!
/* 
We can create a function template that parameterizes 
the element type, and then C++ will use that 
function template to instantiate functions with actual types.


*/
/* template <typename T>
void passRef(const std::vector <T>& arr){
    std::cout << arr[0] << std::endl;
} 

int main(){
    std::vector Dbl{1.2, 2.4, 5.5};

    std::vector Numeric{2, 4, 6, 7};

    passRef(Dbl); -- This works now due to function template
                --- single function that parameterizes type
                ---- and c++ uses that template to instantiate 
                ---- function of actual types
    passRef(Numeric);

    return 0;

}

*/

/* 

We can also run into array assert length issues on run time
if our vector's size is smaller 

so for a constexpr array types using static_assert on const expr length
would be a good choice

Also another alternative can be std::vector::size() which is 
non-const expr meaining it can do runtime assert of the vector size
to avoid such run-time errors.

*/