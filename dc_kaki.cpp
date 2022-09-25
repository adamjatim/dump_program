// Program Feet ke Km/Jam
#include <iostream>

int main(void){
  float input;
  std::cout << "input data yg akan dikonversi : ";
  std::cin >> input;

  // proses
  input =  input / 3280.8;  // <--- rumus konversi kaki/s ke km/jam

  // output
  std::cout << "nilai konversi : " << input << std::endl;
}
