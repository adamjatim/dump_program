#include<iostream>
int main(void){
    int a;
    std::cin >> a;
    if(a%2 == 0){
        std::cout << 0;
    }
    else{
        std::cout << (1l << (a/2));
    }
    
}