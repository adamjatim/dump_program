#include <iostream>
using namespace std;

int tambah(int angka1, int angka2){
    return angka1 + angka2;
}

int main(void){
    int angka1, angka2, hasil;
    char opsi;

    int nilai = 0;

    while (nilai != 1)
    {
        cout << "angka pertama  : ";
        cin >> angka1;
        cout << "angka kedua    : ";
        cin >> angka2;

        hasil = tambah(angka1, angka2);
        cout << "hasil penjumlahan = " << hasil;

        cout << "lanjut proses penjumlahan ? : ";
        cin >> opsi;
        if (opsi == 'n')
        {
            nilai = 1;
        }
        
    }
    
    cout << endl;
    system("pause");
}