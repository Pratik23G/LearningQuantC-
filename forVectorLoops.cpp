/* 
Creating a vector using for loop to find the
average of the test scores of the students in
CSE-140

*/
#include<iostream>
#include<vector>

/* 
We can introduce a template,
templates help to parameterize the element
together with templates, arrays and vectors
we can create a container that works regardless
of the element type and number of elements
*/

template<typename T>
T getAverage(std::vector<T> &arr){
    T average { 0 };
    std:: size_t length { arr.size() };
    for(int i = 0; i < static_cast<int>(length); i++){
        average += arr[i];
    }
    average /= static_cast<int>(length);

    return average;
}


int main(){

    std::vector scores {89, 95, 100, 95};
    std::vector class2 { 93.2, 88.6, 64.2, 81.0 };

    /* std::size_t length { scores.size() };
    int average { 0 };
    for (int i = 0; i < length; i++) {
        average += scores[i];
    }

    average /= static_cast<int>(length);

    
 */
    std::cout << "The average is: " << getAverage(scores)<< "\n";
    std::cout << "The average is: " << getAverage(class2)<< "\n";
    return 0;
}