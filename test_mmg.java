//package com.mycompany.logistikmodul2;
import java.util.Scanner;

//public class Logistikmodul2 {
public class test_mmg {

    public static void barang(){
        int inputan, kodep;
        String kodez,kodea,kodeq,kodew, koder;
        Scanner keyboard = new Scanner(System.in);
        
        
        System.out.print("Masukkan jumalah barang: ");
        inputan=keyboard.nextInt();
        for(int i=1;i<=inputan;++i)
        {
           System.out.print("input kode pengiriman: ");
           kodep=keyboard.nextInt();
           System.out.print("input nama pengiriman: ");
           kodez=keyboard.next();
         System.out.print("input nama penerima: ");
         kodea=keyboard.next();
          System.out.print("input kota pengirima: ");
          kodeq=keyboard.next();
         System.out.print("input kota penerima: ");
          kodew=keyboard.next(); 
        }
        
    }
    
    public static void main(String[] args) {
        int kembali = 1;
        Scanner keyboard = new Scanner(System.in);
        
        while (kembali == 1) {
            barang();
         System.out.println("Ingin menginput lagi? Jika Iya tekan 1, jika tidak tekan 2");
            kembali = keyboard.nextInt();
        }
        
    }
}