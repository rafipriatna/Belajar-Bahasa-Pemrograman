/*
Buat fungsi untuk menghitung luas Segitiga, Lingkaran,
dan Persegi panjang.
*/

#include <stdio.h>

// Deklarasi Variabel Global
float hitung;

void main(){
    // Deklarasi variable
    int alas, tinggi, jari, panjang, lebar;

    printf("Program menghitung luas Segitiga, Lingkaran, dan Persegi Panjang\n\n");

    // Input Block
    printf("===Luas Segitiga===\n");
    printf("Masukkan Alas = ");scanf("%i", &alas);
    printf("Masukkan Tinggi = ");scanf("%i", &tinggi);
    printf("\n");

    printf("===Luas Lingkaran===\n");
    printf("Masukkan Jari-jari = ");scanf("%i", &jari);
    printf("\n");

    printf("===Luas Persegi Panjang===\n");
    printf("Masukkan Panjang = ");scanf("%i", &panjang);
    printf("Masukkan Lebar = ");scanf("%i", &lebar);
    printf("\n");

    system("cls"); // Bersihkan lauar

    // Output Block
    printf("# Luas Segitiga\n");
    printf("Alas = %i", alas);
    printf("\nTinggi = %i", tinggi);
    printf("\n");
    segitiga(alas, tinggi);
    printf("\n\n"); // Spasi

    printf("# Luas Lingkaran\n");
    printf("Jari-jari = %i", jari);
    printf("\n");
    lingkaran(jari);
    printf("\n\n"); // Spasi

    printf("# Luas Persegi Panjang\n");
    printf("Panjang = %i", panjang);
    printf("\nLebar = %i", lebar);
    printf("\n");
    persegi_panjang(panjang, lebar);
    printf("\n\n"); // Spasi
}

// Kumpulan fungsi-fungsi

void segitiga(int a, int t){
    hitung = (a * t)/2;
    printf("Luas segitiga adalah %2.f", hitung);
}

void lingkaran(int j){
    float phi = 3.14;
    hitung = phi * j * j;
    printf("Luas Lingkaran adalah %2.f", hitung);
}

void persegi_panjang(int p, int l){
    hitung = p * l;
    printf("Luas Persegi Panjang adalah %2.f", hitung);
}
