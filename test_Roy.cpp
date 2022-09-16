#include <iostream>
#include <string>
using namespace std;
 
struct pasien{
    string nama;
    string umur;
    string alamat;
    string dokter;
    string ruangan;
    string tanggal;
};

int main()
{
    char ulangin = 'y';
    int counter = 0;
    pasien psi;
    cout<<"masukan nama pasien = ";
    cin>>psi.nama;
    cout<<endl;

    cout<<"masukan umur pasien = ";
    cin>>psi.umur;
    cout<<endl;

    cout<<"masukan alamat pasien = ";
    cin>>psi.alamat;
    cout<<endl;

    cout<<"nama dokter = ";
    cin>>psi.dokter;
    cout<<endl;

    cout<<"ruangan berapa = ";
    cin>>psi.ruangan;
    cout<<endl;
    
    cout<<"tanggal rawat = ";
    cin>>psi.tanggal;
    cout<<endl;

 
    
    
    cout<<"DATA PASIEN"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Nama    : "<<psi.nama<<endl;
    cout<<"umur : "<<psi.umur<<endl;
    cout<<"alamat    : "<<psi.alamat<<endl;
    cout<<"nama dokter : "<<psi.dokter<<endl;
    cout<<"ruangan berapa : "<<psi.ruangan<<endl;
    cout<<"tanggal rawat : "<<psi.tanggal<<endl;
    while (ulangin == 'y'){
        printf("apakah mau menuis ulang?\n");
        printf("jawab (y/t): ");
        cin>>ulangin;
        counter++;
    }
      
    system("pause");
    return EXIT_SUCCESS;
}