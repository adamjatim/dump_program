#include<iostream>
using namespace std;

int pemesanan()
{
	int i, hari[100], kt[100];
	cout<<"jangka waktu sewa (hari) : ";
	cin>>hari[i];
	cout<<"1. Tenda Kecil ";
	kt[1]=hari[i]*250;
	cout<<": Rp."<<kt[1]<<".000,-"<<endl;
	cout<<"2. Tenda Sedang ";
	kt[2]=hari[i]*500;
	cout<<": Rp."<<kt[2]<<".000,-"<<endl;
	cout<<"3. Tenda Besar ";
	kt[3]=hari[i]*1000;
	cout<<": Rp."<<kt[3]<<".000,-"<<endl;
}

int harga()
{
	int i, tenda[100], jt[100], total[100], kt[100];
	cout<<"paket yang dipilih\t : ";
	cin>>tenda[i];
	cout<<"jumlah tenda\t\t : ";
	cin>>jt[i];
	
	if (tenda[i]==1)
	{
		total[i]=kt[1]*jt[i];
		cout<<"Total harga\t\t : Rp."<<total[i]<<".000,-";
	}
	
	else if (tenda[i]==2)
	{
		total[i]=kt[2]*jt[i];
		cout<<"Total harga\t\t : Rp."<<total[i]<<".000,-";
	}
	
	
		else if (tenda[i]==3)
		{
		total[i]=kt[3]*jt[i];
		cout<<"Total harga\t\t : Rp."<<total[i]<<".000,-";
		}
	
			else
			{
				cout<<"Nomor yang anda masukkan salah";
			}
}

int main()
{
	int p, i, pmsn, h, u, total[100];
	char jaw;
	
	cout<<"---------- SEWA TENDA ----------"<<endl;
	cout<<"pilihan tenda :"<<endl;
	cout<<"1. Tenda Kecil (Tenant)"<<endl;
	cout<<"\t harga : Rp.250.000,-"<<endl;
	cout<<"2. Tenda Sedang (max 150 orang)"<<endl;
	cout<<"\t harga : Rp.500.000,-"<<endl;
	cout<<"3. Tenda Besar (max 500+ orang)"<<endl;
	cout<<"\t harga : Rp.1.000.000,-"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"jumlah pelanggan\t : ";
	cin>>p;
	cout<<endl;
	
	for(i=1; i<=p; i++)
	{
		cout<<"\t Pelanggan "<<i<<endl;
		pmsn=pemesanan();
		h=harga();
		cout<<endl;
		
		cout<<"pesanan lain ? (y/n)\t : ";
		cin>>jaw;
		if (jaw='y')
		{
			h=harga();
			cout<<endl;
			
			cout<<"pesanan lain ? (y/n) : ";
			cin>>jaw;
			
			if (jaw=='y')
			{
				h=harga();
				cout<<endl;
				cout<<"uang yang perlu dibayarkan : Rp."<<total[1]+total[2]+total[3]<<"0.000,-";
			}
			
			else (jaw=='n');
			{
				cout<<"uang yang perlu dibayarkan : Rp."<<total[1]+total[2]<<"0.000,-";
			}
				
		}
		else (jaw=='n');
		{
			cout<<"uang yang perlu dibayarkan : Rp."<<total[1]<<"0.000,-";
		}
	}
	system("pasue");
}
