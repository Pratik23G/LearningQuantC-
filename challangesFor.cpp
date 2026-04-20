#include<iostream>
#include<vector>

template<typename T>
void printValue(std::vector<T> &arr){
    std::size_t length { arr.size() };
    for(std::size_t i { 0 }; i < length; i++){
        std::cout << arr[i] << " ";
    }
    if( length > 0) {
        std::cout << "\n";
    }
}


int main(){
    std::vector arr1{ 2, 4, 6, 8, 10 };
    printValue(arr1);
    return 0;
}