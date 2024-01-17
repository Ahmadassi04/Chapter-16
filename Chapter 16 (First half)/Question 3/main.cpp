#include <iostream>
#include <vector>

template<typename T>
T printArray(const std::vector<T>& arr1){

    int i{0};
    for( i; i < arr1.size(); ++i){
        std::cout << arr1[i] << '\t';
    }
    std::cout << '\n';
    return arr1[i];
}

template<typename U>
U searchArray(std::vector<U>&arr2, int s){

    for(int i{0}; i < arr2.size(); ++i){
        if(arr2[i] == s){
        return i;
    }
    }
    return -1;
}

int main()
{
    std::vector<int> arr{ 4, 6, 7, 3, 8, 2, 1, 9 };
    std::cout << "Enter a number between 1 and 9: ";
    int num{arr[0]};
    std::cin >> num;

    printArray(arr);

    int i { searchArray(arr, num) };

    if (i != -1)
        std::cout << "The number " << num << " has index " << i << '\n';
    else
        std::cout << "The number " << num << " was not found\n";

    return 0;
}
