#include<iostream>
#include<string>
using namespace std;

struct data_pasien
{
	string nama,
	nama_dokter,
	alamat,
	ruangan;
	
	struct tanggal_rawat
	{
		int tanggal,
		bulan,
		tahun;
	}tgl_rawat;
};

void Error()
{
	cout<<"Inputan Error"<< endl;
}

int main()
{
	int input_arr, i=0, input; 
    char input_char;
	

    // while variabel
    int nilai1=0, nilai2=0;
	
	while(nilai1 != 1){
		cout<<"==================================="<<
		endl<<"APLIKASI REKAM MEDIS RUMAH SAKIT"<<
		endl<<"===============================\n\n";
		cout<<"Inputkan jumlah pasien\t: ";
		cin>>input_arr; 
		
		data_pasien pasien[input_arr];
		
		for (i=0;i<input_arr;i++)
		{
			
			cout<<"INPUT DATA PASIEN KE-"<<i+1<< endl;
			cout<<"\n--------------------------------" <<endl;
			cout<<" Input Nama\t\t: ";
			fflush(stdin);
			getline(cin, pasien[i].nama);
			fflush(stdin);
			
			cout<<"\n--------------------------------" <<endl;
			cout<<"Input Alamat\t\t: ";
			fflush(stdin);
			getline(cin, pasien[i].alamat);
			
			cout<<"\n--------------------------------" <<endl;
			cout<<"Input Nama Dokter\t\t: ";
			cin>> pasien[i].nama_dokter;
			
			cout<<"\n--------------------------------" <<endl;
			cout<<"Input Ruangan Pasien\t\t: ";
			cin>> pasien[i].ruangan;
			
			cout<<"\n--------------------------------" <<endl;
			cout<<"Input Tanggal Rawat (DD/MM/YYYY)" <<endl;
			
			while(nilai2 != 1){
				cout<<"Tanggal (1 - 31)\t\t: ";
				cin>> input;
				if(input<= 31 && input>= 1){
					pasien[i].tgl_rawat.tanggal = input;
					nilai2 = 1;
				}
				else{
					Error();
				}
			}
            nilai2 = 0;
			
			while(nilai2 != 1){
				cout<<"Bulan (1 - 12)\t\t: ";
				cin>> input;
				if(input<= 12 && input>= 1){
					pasien[i].tgl_rawat.bulan = input;
					nilai2 = 1;
				}
				else{
					Error();
				}
			}
            nilai2 = 0;
		    
		    while(nilai2 != 1){
		    	cout<<"Tahun\t\t\t: ";
		    	cin>> input;
		    	if(input >= 1){
		    		pasien[i].tgl_rawat.tahun = input;
		    		nilai2 = 1;
				}
				else{
					Error();
				}
			}
            nilai2 = 0;
			
		}
		
		cout<< endl << endl;
		
		for(i=0; i<input_arr; i++){
			cout<< "DATA PASIEN KE-" << i+1 << endl <<endl;
			cout<< "Nama Pasien     : " << pasien[i].nama <<endl;
			cout<< "Alamat          : " << pasien[i].alamat <<endl;
			cout<< "Nama Dokter     : " << pasien[i].nama_dokter <<endl;
			cout<< "Ruangan Pasien  : " << pasien[i].ruangan <<endl;
			cout<< "Tanggal Rawat   : " << pasien[i].tgl_rawat.tanggal<<
			       "/" << pasien[i].tgl_rawat.bulan <<
				   "/" << pasien[i].tgl_rawat.tahun <<endl;
			cout<< endl<< endl;  
		}

        cout << "Pendataan Selesai? (Y / N) : ";
	    cin >> input_char;
	    if(input_char == 'y'){
		    nilai1=1;
	    }

	}
	
	return 0;
}