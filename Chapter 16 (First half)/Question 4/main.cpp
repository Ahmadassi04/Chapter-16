#include <iostream>
#include <vector>

template<typename T>
T findMax(const std::vector<T>& arr){

    int length{arr.size()};
    int max1{0};
    for(int i{0}; i < length; ++i){
        if(arr[i] > max1){
            max1 = arr[i];
        }
    }
    return max1;
}

int main()
{
    std::vector<int> testScore { 84, 92, 76, 81, 56 };
    std::cout << "The max score is: " << findMax(testScore) << '\n'; // prints 92

    return 0;
}
