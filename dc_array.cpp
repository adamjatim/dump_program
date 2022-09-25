#include <iostream>

int main(void) {
    std::string array[]{
        [50] = "ini index 50",
        [100] = "ini index 100"
    };

    std::cout << array[0] << std::endl;
    std::cout << array[50] << std::endl;
    std::cout << array[100] << std::endl;
}
