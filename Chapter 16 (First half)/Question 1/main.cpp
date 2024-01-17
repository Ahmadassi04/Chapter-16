#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    for(int i; i < arr.size(); ++i){
        std::cout << arr[i] << '\t';
    }

    return 0;
}
