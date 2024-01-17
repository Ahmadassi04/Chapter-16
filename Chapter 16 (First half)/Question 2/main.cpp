#include <iostream>
#include <vector>

template<typename T>
void printArray(const std::vector<T>& arr){

    for(int i; i < arr.size(); ++i){
        std::cout << arr[i] << '\t';
    }
}

int main()
{
    std::vector<int> arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printArray(arr);

    return 0;
}
