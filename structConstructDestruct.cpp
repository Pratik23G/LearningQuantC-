#include <iostream>

struct Foo{
    Foo() {}
    Foo(int n): Foo() { throw n;}
    ~Foo() { std:: cout <<"B"; }
};

int main(){

    try{
        Foo(0);

    } catch(...) {
        std::cout << "A" << "\n";
    }

    return 0;
}