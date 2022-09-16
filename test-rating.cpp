#include <iostream>

void sortRate(float* rate, std::string* tempat, int panjang){
    int i, j, bantuRate;
    std::string bantuTempat;
    for (i = 0; i < panjang; i++){
        for (j = 0; j + 1 < panjang -i; j++){
            if (rate[j] < rate[j+1]){
                bantuRate = rate[j];
                rate[j] = rate[j+1];
                rate[j+1] = bantuRate;
                bantuTempat = tempat[j];
                tempat[j] = tempat[j+1];
                tempat[j+1] = bantuTempat;
            }
        }
    }
}

int main(void){
    int inputData;
    std::cout << "Input jumlah data yang diinginkan : ";
    std::cin >> inputData;
    std::string dataName[inputData], dump;
    float dataRate[inputData];
    std::cout << std::endl;

    //input
    for (int i = 0; i < inputData; i++){
        std::getline(std::cin, dump );  // <-- hapus ini jika terjadi error pada program
        std::cout << "Enter the Destination : ";
        std::getline(std::cin, dataName[i]);
        std::cout << "Rate the Destination : ";
        std::cin >> dataRate[i];
    }
    std::cout << std::endl;

    // proses
    sortRate(dataRate, dataName, inputData);
    
    //output
    for (int i = 0; i < inputData; i++){
        std::cout << dataName[i] << " : " << dataRate[i] << " stars" << std::endl;
    }
}