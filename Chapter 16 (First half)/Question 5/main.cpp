#include <iostream>
#include <vector>

template<typename T>
T fizzbuzz(const std::vector<T>& x){

    for(int i{1}; i <= x.size() ; ++i){

        bool check{false};
        if(i % 3 == 0){
            std::cout << "fizz";
            check = true;
        }
        if(i % 5 == 0){
            std::cout << "buzz";
            check = true;
         }
        if(i % 7 == 0){
            std::cout << "pop";
            check = true;
         }
         if(i % 11 == 0){
            std::cout << "bang";
            check = true;
         }
         if(i % 13 == 0){
            std::cout << "jazz";
            check = true;
         }
         if(i % 17 == 0){
            std::cout << "pow";
            check = true;
         }
         if(i % 19 == 0){
            std::cout << "boom";
            check = true;
         }
        if(!check)
            std::cout << i;

        std::cout << '\n';
    }

}

int main()
{

    std::vector<int> num(150);
    fizzbuzz(num);

    return 0;
}
