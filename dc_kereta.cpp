#include <iostream>

int main(void){
    int panjang;
    std::cin >> panjang;
    int array[panjang];
    for(int a = 0; a < panjang; a++){
        std::cin >> array[a];
    }

    std::cout << std::endl; // giving space between

    for (int a = panjang-1; a >= 0; a--){
        std::cout << array[a] << ", ";
    }
    std::cout << std::endl;
}