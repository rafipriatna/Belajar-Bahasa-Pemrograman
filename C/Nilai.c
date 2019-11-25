#include<stdio.h>

// Rafi Priatna - 2019
// Tugas Laporan Akhir

void main (){
    // Deklarasi Variabel
    float uts, uas, hasil;

    // Mulai Programnya
    printf("==========Nilai Akhir UTS & UAS==========\n");
    printf("\nMasukkan nilai UTS : "); scanf("%f", &uts);
    printf("Masukkan nilai UAS : "); scanf("%f", &uas);

    // Hitung
    hasil = (uts+uas)/2;

    // Hasil Nilai
    printf("\n"); // Beri jarak
    if(hasil > 80){
        printf("Nilai akhir Anda adalah A");
    }else if(hasil > 70){
        printf("Nilai akhir Anda adalah B");
    }else if(hasil > 60){
        printf("Nilai akhir Anda adalah C");
    }else if(hasil >= 50){
        printf("Nilai akhir Anda adalah D");
    }else{
        printf("Nilai akhir Anda adalah E");
    }
}
