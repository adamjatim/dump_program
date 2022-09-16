


import java.util.Scanner;

class tenda {
    public int harga1() {
        return 250000;
    }
    public int harga2() {
        return 500000;
    }
    public int harga3() {
        return 1000000;
    }
}

class hargasewa extends tenda{
    public int total;
    public int sewa (int lama, int jenis){
        if (jenis == 1){
            total = lama * super.harga1();
        }
        if (jenis == 2){
            total= lama * super.harga2();
        }
        if (jenis == 3){
            total = lama * super.harga3();
        }
        return total;
    }
}

public class test_Wildan_01 {
    public static void main(String[] args) {
        
            int inputjn = 0, inputlm = 0, hargatotal = 0, angka = 0;
            hargasewa abc = new hargasewa();
            System.out.println("+---------------------+");
            System.out.println("| PERSEWAAN TENDA ABC |");
            System.out.println("+---------------------+");
            System.out.println("\n Daftar Harga sewa perhari\n" +
                                " 1. Tenda Kecil  :  250000\n" +
                                " 2. Tenda Sedang :  500000\n" +
                                " 3. Tenda Besar  : 1000000\n");

            try (Scanner input = new Scanner(System.in)) {
                while (angka != 1){
                    System.out.print("Pilih Jenis Tenda : ");
                    inputjn = input.nextInt();
                    if (inputjn >= 1 && inputjn <= 3){
                    angka = 1;
                    }
                    else {
                        System.out.print("Salah Input");
                    }
                }
                angka = 0;
                while (angka != 1) {
                    System.out.print("Input Lama peminjaman : ");
                    inputlm = input.nextInt();
                    if (inputlm <= 0){
                        System.out.print("Salah Input");
                        continue;
                    }
                    angka = 1;
                }
                hargatotal = abc.sewa(inputlm, inputjn);
                System.out.print("Total Biaya Sewa Tenda : " +hargatotal);
        }
    }
}
