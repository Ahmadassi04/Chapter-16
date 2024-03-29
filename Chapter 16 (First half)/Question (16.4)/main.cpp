#include <iostream>
#include <vector>

template<typename T>
void printElement(const std::vector<T>& arr1,int i){

    if(i < arr1.size() && i >= 0){
        std::cout << "The element has value " << arr1[i] << '\n';
    }
    else{
        std::cout << "Invalid index" << '\n';
    }

}

int main()
{
    std::vector<int> v1 { 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector<double> v2 { 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}
