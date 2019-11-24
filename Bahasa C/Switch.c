#include <stdio.h>

void main(){
    int hari;

    puts("Menentukan nama hari\n");
    puts("1. Senin\n2. Selasa\n3. Rabu\n4. Kamis");
    puts("5. Jumat\n6. Sabtu\n7. Minggu");

    printf("\nMasukkan kode hari (1-7) : ");
    scanf("%d", &hari);

    switch(hari){
    case 1 :
        puts("Hari Senin");
        break;
    case 2 :
        puts("Hari Selasa");
        break;
    case 3 :
        puts("Hari Rabu");
        break;
    case 4 :
        puts("Hari Kamis");
        break;
    case 5 :
        puts("Hari Jum'at");
        break;
    case 6 :
        puts("Hari Sabtu");
        break;
    case 7 :
        puts("Hari Minggu");
        break;
    default :
        puts("Kode hari yang Anda masukkan SALAH");
    }
    getch();
}
