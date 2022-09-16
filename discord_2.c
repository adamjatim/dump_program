#include <stdio.h>

struct Angka
{
    int angka;
};

struct Angka angka1;
struct Angka angka2;

#define penjumlahan(angka1, angka2) (angka1 + angka2)

int main()
{
    int angka1 = 10, angka2 = 5;
    printf("#define penjumlahan : %d\n", penjumlahan(angka1, angka2));
    return 0;
}
