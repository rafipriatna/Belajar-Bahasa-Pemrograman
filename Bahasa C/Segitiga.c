#include<stdio.h>

// Rafi Priatna - 2019
// Tugas Laporan Akhir

void main (){
    // Deklarasi Variabel
    int r,a,f,i;

    // Mulai Programnya
    printf("=====LOOPING SEGITIGA ANGKA=====\n");

    r = 9;
    for(a = 0;a <= r;a++){
        for(f = r-a;f > 0;f--){
            printf(" ");
        }
        for(i = 1;i <= a;i++){
            printf("%i ", i);
        }
        printf("\n");
    }
}
