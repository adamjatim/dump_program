#include <iostream>
//#include <conio.h>
//#include <windows.h>
using namespace std;

int pil;
void pilih();
void buat_baru();
void tambah();
void hapus();
void searching();
void tampilan();

struct simpul{
	char nama[65];
    struct simpul *next;
}mhs, *baru, *awal=NULL, *akhir=NULL, *hapuskan, *bantu;

void clrscr(){
	system("clear"); // system("cls");
}

int main(){
	do{
	    clrscr();
		cout << " === MENU DATA DIRI SEDERHANA DENGAN MENGGUNAKAN STACK === " << endl;
		cout << " 1) Masukkan/Tambah Data" << endl;
		cout << " 2) Tampilkan Data" << endl;
		cout << " 3) Hapus Baru" << endl;
		cout << " 4) Keluar\n" << endl;
		cout << " Pilih Menu : ";
		cin>>pil;
	    pilih();
	}while (pil!=4);
    return 0;
}

void pilih(){
	if(pil==1){
        cout << "1 dipilih" << endl;
	    tambah();
    }
	if(pil==2){
        cout << "2 dipilih" << endl;
	    hapus();
    }
	if(pil==3){
        cout << "3 dipilih" << endl;
	    tampilan();
	}
}

void buat_baru(){
	baru=(simpul*)malloc(sizeof(struct simpul));
	cout << "Input Nama : ";
	cin >>baru->nama;
	baru->next=NULL;
}

void tambah(){
	buat_baru();
	if(awal==NULL){
        awal=baru;
	    akhir=baru;
	    akhir->next=NULL;
    }
	else{
    	baru->next=awal;
	    awal=baru;
    }
	cout << endl << endl;
	tampilan();
}

void hapus(){
	if(awal==NULL){
		cout<<"kosong";
    }
	else{
	    hapuskan = awal;
    	awal=awal->next;
	    free(hapuskan);
    }
	cout << endl << endl;
	tampilan();
}

void tampilan(){
	if(awal==NULL){
		cout << "Kosong";
    }
	else{
	    bantu=awal;
	    while(bantu!=NULL){
		    cout << "NAMA : " << bantu->nama << endl;
            bantu=bantu->next;
		}
	}
	//getch();a
}