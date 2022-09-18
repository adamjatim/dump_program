#include <stdio.h>

int main(void){
    int panjang;
    scanf("%d", &panjang);
    int array[panjang];
    for(int a = 0; a < panjang; a++){
        scanf("%d", &array[a]);
    }

    printf("\n"); // giving space between

    for (int a = panjang-1; a >= 0; a--){
        printf("%d", array[a]);
        if (a != 0){
            printf(", ");
        }
        
    }
    printf("\n");
}