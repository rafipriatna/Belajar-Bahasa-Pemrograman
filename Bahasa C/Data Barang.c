#include <stdio.h>

char nama[20], jenis, quality;
float harga;

void main(){
    puts("==========INPUT DATA BARANG==========");
    printf("\nMasukkan Nama Barang : "); gets(nama);

    system("cls");
    puts("==========INPUT DATA BARANG==========");
    printf("Jenis barang yang tersedia :");
    printf("\nA. Lampu");
    printf("\nB. TV");
    printf("\nC. Gadget");
    printf("\nD. Radio");
    printf("\nPilih jenis barang (A/B/C/D) : ");
    jenis=getchar();

    system("cls");
    puts("==========INPUT DATA BARANG==========");
    printf("Harga Barang : "); scanf("%f", &harga);

    system("cls");
    puts("==========INPUT DATA BARANG==========");
    printf("Kualitas barang yang tersedia :");
    printf("\nA. Sangat Baik");
    printf("\nB. Baik");
    printf("\nC. Buruk");
    printf("\nD. Sangat Buruk");
    printf("\nMasukkan Kualitas (A/B/C/D) :");
    quality=getche();

    system("cls");
    putchar('X');
    puts(" Data Barang");
    printf("\nNama : %s \nJenis : %c \nHarga : %g \nKualitas : %c", nama, jenis, harga, quality);
    printf("\n");
    getch();
}
