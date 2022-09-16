import java.util.Scanner;



class hitungsewa {
    public void persewaan(int totalharga, int lamasewa, int tarifsewa){
        switch(tarifsewa){
            case 1:
            lamasewa =
            totalharga = lamasewa * 250000();
            case 2:
            totalharga = lamasewa * 500000();
            case 3:
            totalharga = lamasewa * 1000000();
        }
    }
}

class keluar{
    public void exit(){
        System.out.println("Good Bye...");
        System.exit(0);
    }
}
public class test_Atiq_01 {
    
    public static void main(String[] args){
        
        System.out.print("Program Kode Sewa Tenda Pesta");
        System.out.print("\n");
        System.out.print("######################################");
        System.out.print("\n");
        System.out.print("# kode 1 # Tenda Kecil  Rp 250.000   #");
        System.out.print("\n");
        System.out.print("# kode 2 # Tenda Sedang Rp 500.000   #");
        System.out.print("\n");
        System.out.print("# kode 3 # Tenda Besar  Rp 1.000.000 #");
        System.out.print("\n");
        System.out.print("# kode 4 # keluar/exit               #");
        System.out.print("\n");
        System.out.print("######################################");
        System.out.print("\n");
        System.out.print("Masukkan kode : ");
        System.out.print("\n");
        Scanner input = new Scanner(System.in);


        Integer hitungsewa = input.nextInt();
       
    }
}