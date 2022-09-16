import java.util.Scanner;

class pasien
{
	String NamaLengkap[] = new String[100];
    String Alamat[] = new String[100];
	String NamaDokter[] = new String[100];
    String Ruangan[] = new String[100];
	String TanggalRawat[] = new String[100];

    
    char a;
	char i;        
        
}

class jumlahpasien extends pasien
{
	Scanner input = new Scanner(System.in);
	int jmlh;
	public int jumlah(){
		System.out.print("Input Jumlah Pasien : ");
		jmlh=input.nextInt();
		return(jmlh);	
	}
}

class test_PD_02
{
    public static void main(String[] args) 
	{
		int inputpasien;
		try (Scanner input = new Scanner(System.in)) 
		{
			pasien sakit = new pasien();
			jumlahpasien jml= new jumlahpasien();

			do 
			{
				System.out.println("+---------------------------------------+");
				System.out.println("|   RUMAH SAKIT MARINIR EWA PANGALILA   |");
				System.out.println("|       REKAM MEDIS ANGKATAN LAUT       |");
				System.out.println("|        JL. GOLF NO 1 SURABAYA         |");
				System.out.println("+---------------------------------------+");
				System.out.println("");

				inputpasien=jml.jumlah();

				for(int i=1; i<=inputpasien; i++)
				{
					System.out.println("+--------------+");
					System.out.println("DATA PASIEN Ke- " + i);
					System.out.println("+--------------+");

					System.out.print("Nama Lengkap Pasien : ");
					sakit.NamaLengkap[i] = input.nextLine();
					
					System.out.print("Alamat Pasien : ");
					sakit.Alamat[i] = input.nextLine();

					System.out.print("Nama Dokter : ");
					sakit.NamaDokter[i] = input.nextLine();

					System.out.print("Ruangan Pasien (angka) : ");
					sakit.Ruangan[i] = input.nextLine();

					System.out.print("Tanggal Rawat Pasien (dd/mm/yyyy): ");
					sakit.TanggalRawat[i] = input.nextLine();
					System.out.println("");
				}

				System.out.println("");
				System.out.println("+---------------------------------------+");
				System.out.println("|   RUMAH SAKIT MARINIR EWA PANGALILA   |");
				System.out.println("|       REKAM MEDIS ANGKATAN LAUT       |");
				System.out.println("|        JL. GOLF NO 1 SURABAYA         |");
				System.out.println("+---------------------------------------+");
				System.out.println("");

				for(int i=1; i<=inputpasien; i++)
				{
					System.out.println("");
					System.out.println("+--------------+");
					System.out.println("DATA PASIEN Ke- " + i);
					System.out.println("+--------------+");
					System.out.println("Nama Lengkap Pasien : " + sakit.NamaLengkap[i]);
					System.out.println("Alamat Pasien : " + sakit.Alamat[i]);
					System.out.println("Nama Dokter : " +sakit.NamaDokter[i]);
					System.out.println("Ruangan Pasien : " +sakit.Ruangan[i]);
					System.out.println("Tanggal Rawat Pasien : " +sakit.TanggalRawat[i]);
				}
					
				System.out.print ("\nApa Sudah Benar? (Y/T): ");
				sakit.a=input.next().charAt(0);
				System.out.println(" ");
			}
			while((sakit.a=='T')||(sakit.a=='t'));
				System.out.println("\n\n TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI! \n\n");

				
		}
    }
}