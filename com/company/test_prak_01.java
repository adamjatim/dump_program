package com.company;

class Lingkaran {
    public double jariJari;
    public Lingkaran() {
        setJariJari(1);
    }
    public void setJariJari(double r) {
        if (r > 0)
            jariJari = r;
    }
    public double getJariJari() {
        return (jariJari);
    }
    public double hitungKeliling() {
        return (2.0 * Math.PI * jariJari);
    }
    public double hitungLuas() {
        return (Math.PI * jariJari * jariJari);
    }
}

class Silinder extends Lingkaran {
    public double tinggi;
    public Silinder() {
        setJariJari(1);
        setTinggi(1);
    }
    public Silinder(double r, double t) {
        setJariJari(r);
        setTinggi(t);
    }
    public void setTinggi(double t) {
        if (t > 0)
            tinggi = t;
    }
    public double getTinggi() {
        return (tinggi);
    }
    public double hitungKelilingAlas() {
        return (2.0 * Math.PI * super.getJariJari());
    }
    public double hitungLuasPermukaan() {
        return ((2.0 * Math.PI * super.getJariJari() * super.getJariJari()) + 
        (2.0 * Math.PI * super.getJariJari()) * tinggi);
    }
    public double hitungVolume() {
        return (Math.PI * super.getJariJari() * super.getJariJari() * tinggi);
    }
}

public class test_prak_01 {
    public static void main(String[] args) {
        Silinder abc = new Silinder();
        Silinder xyz = new Silinder(23.5, 73.1);
        System.out.println("Data silinder ABC:");
        System.out.println("------------------");
        System.out.println(" * Jari-jari : " + abc.getJariJari());
        System.out.println(" * Tinggi : " + abc.getTinggi());
        System.out.println(" * Luas : " + abc.hitungLuas());
        System.out.println(" * Volume : " + abc.hitungVolume());
        System.out.println();
        System.out.println("Data silinder XYZ:");
        System.out.println("------------------");
        System.out.println(" * Jari-jari : " + xyz.getJariJari());
        System.out.println(" * Tinggi : " + xyz.getTinggi());
        System.out.println(" * Keliling Alas : " + xyz.hitungKelilingAlas());
        System.out.println(" * Luas : " + xyz.hitungLuasPermukaan());
        System.out.println(" * Volume : " + xyz.hitungVolume());
        System.out.println();
    }
}
