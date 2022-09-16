#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define panjang_nim 8
#define nama 20
#define nilai 4

struct simpulDataSiswa{
    char nim[panjang_nim+1]; //Nim Siswa
    char nama_mahasiswa[nama+1]; //Nama Mahasiswa
    int quiz[nilai+1];
    int tugas[nilai+1];
    int uts[nilai+1];
    int uas[nilai+1];
    int nilai_akhir[nilai];
    struct simpulDataSiswa *next;
};

struct simpulDataSiswa *kepala = NULL;
void input_data(void);
void masukan_string(char *keterangan, char *masukan, int panjang_maks);
void masukan_string_float(char *keterangan, int *masukan);
void tampilkan(void);


int main(){
    input_data();
    tampilkan();
}

void input_data(void){
    char jawaban;
    int nilai_quiz, nilai_uts, nilai_uas;
    struct simpulDataSiswa *baru;

    do{
        baru = (struct simpulDataSiswa *)malloc(sizeof(struct simpulDataSiswa));
        if(baru){
            masukan_string("\nNama Mahasiswa : ",baru->nama_mahasiswa,nama);
            masukan_string("Nim Mahasiswa : ",baru->nim,panjang_nim);
            masukan_string_float("Nilai Quiz : ",baru->quiz);
            masukan_string_float("Nilai UTS : ",baru->uts);
            masukan_string_float("Nilai UAS : ",baru->uas);
            baru->next=kepala;
            kepala = baru;

            printf("masukan Data Lagi (Y/T) : ");

            do{
                jawaban = toupper(getch());
            }while(!(jawaban == 'Y' || jawaban == 'T'));
        }else{
            puts("Memori Tidak cukup");
            break;
        }
    }while(jawaban == 'Y');
}

void masukan_string_float (char *keterangan, int *masukan){
    int nilai_semua;
        printf(keterangan);
        scanf("%i",&nilai_semua);
}

void masukan_string(char *keterangan, char *masukan, int panjang_maks){
    char st[256];
    struct simpulDataSiswa *nilai_akhir;
    do{
        printf(keterangan);
        gets(st);
        if(strlen(st)>panjang_maks){
            printf("Terlalu Panjang. Maks %d karakter\n",panjang_maks);
        }
    }while(strlen(st)>panjang_maks);
    strcpy(masukan,st);
}

void tampilkan(void){
    struct simpulDataSiswa *sementara;
    puts("\nData Mahasiwa : ");
    sementara=kepala;
    while (sementara)
    {
        printf("\nNama : %s",sementara->nama_mahasiswa);
        printf("\nNim : %s",sementara->nim);
        printf("\nQuiz : %i",sementara->quiz);
        printf("\nUTS : %i",sementara->uts);
        printf("\nUAS : %i",sementara->uas);
        sementara=sementara->next;
    }
}