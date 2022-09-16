import java.util.Scanner;

public class test_PD_01 {

public static void main(String[] args) {
    int tanggal, bulan;

    Scanner input = new Scanner (System.in);
    System.out.println("+---------------------------------------+");
    System.out.println("|   RUMAH SAKIT MARINIR EWA PANGALILA   |");
    System.out.println("|       REKAM MEDIS ANGKATAN LAUT       |");
    System.out.println("|        JL. GOLF NO 1 SURABAYA         |");
    System.out.println("+---------------------------------------+");
  
    int JumlahPasien;
    String NamaLengkap,Alamat,NamaDokter,Ruangan,TanggalRawat;
    char a;

    do{
        
        System.out.print("Input Jumlah Pasien : ");
        JumlahPasien = input.nextInt(); 

    for(int i=0;i<JumlahPasien;i++ )
    {

        System.out.println("+--------------+");
        System.out.println("DATA PASIEN KE ");
        System.out.println("+--------------+");

        String first = input.next(), last = input.next();
        System.out.print("Nama Lengkap Pasien : ");
        NamaLengkap = input.nextLine();

        System.out.print("Alamat Pasien : ");
        Alamat = input.nextLine();
        
        System.out.print("Nama Dokter : ");
        NamaDokter = input.nextLine();
        
        System.out.print("Ruangan Pasien : ");
        Ruangan = input.nextLine();
        
        System.out.print("Tanggal Rawat Pasien : ");
        TanggalRawat = input.nextLine();
        
    }
            System.out.println("Apa Sudah Benar ?");
            a = input.next().charAt(0);
        }
            while(a == 'y' || a == 'Y');
    }

}