#include <iostream>
#include <string>

int main(void){
    std::string array;
    getline(std::cin, array);

    // proses
    for(int i = 0; i < array.size(); i++){
        if(i == 0 || array[i] == ' ' || array[i-1] == ' ' || array[i+1] == ' ' || i+1 == array.size() ){
            std::cout << array[i];
        }
    }
    std::cout << std::endl;   
}
