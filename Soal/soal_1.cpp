// Input : 234
// Output : 2 + 3 + 4 = 9

// Input : 555
// Output : 5 + 5 + 5 = 15 
//          1 + 5 = 6

#include <iostream>

int main(){
    std::string InputArray;

    // geting input number into string
    std::cin >> InputArray; 

    // proses
    int LengthArray = InputArray.length();
    int NumberArray[LengthArray];
    for (int i = 0; i < LengthArray; i++){
        switch (InputArray[i]){
            case '0':
                NumberArray[i] = 0;
                break;
            case '1':
                
                break;
            case '2':

                break;
            case '3':
                
                break;
            case '4':

                break;
            case '5':
                
                break;
            case '6':

                break;
            case '7':
                
                break;
            case '8':

                break;
            case '9':
                
                break;
            default:

                break;
        }
    }
    
}