#include<iostream>
#include <algorithm>
#include<vector>

int main(){
    std::vector array1{ 2, 1, 4, 6, 7, 9, 8};

    int userInput { };
    

    while( true ) {
        std::cout << "Enter a number between 1-9: " << "\n";
        std::cin >> userInput;
        if(std::find(array1.begin(), array1.end(), userInput) != array1.end()){
            std::cout << userInput << "\n";
        }else {
            std::cout << "Could not find the number" << "\n";
            break;
        }
    }
    return 0;
}