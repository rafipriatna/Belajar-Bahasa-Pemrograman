/*
Buatlah program perhitungan uang kursus.
Biaya Pokok Kursus :
1. Bahasa Inggris = 1 Juta
2. Bahasa Prancis = 2 Juta
3. Bahasa Jepang = 3 Juta
4. Bahasa Arab = 4 Juta
5. Bahasa Cina 5 Juta
Biaya modul pelatihan sebesar 25% dari biaya pokok kursus.
Biaya administrasi sebesar 15% dari biaya pokok kursus.
Biaya kotor = Pokok + Modul + Administrasi.
Pajak 2,5% dari total biaya kotor.
Hitung uang kursus bersih yang harus dibayarkan.
Uang bersih = Pajak + Kotor
Input Nama, No Anggota, Kursus, dan dihitung.
*/

#include <stdio.h>

void main (){
    // Deklarasi Variabel
    char nama[15], no_anggota[8];
    int kursus;
    float harga_kursus, modul, admin, kotor, pajak, bersih;

    // Mulai Programnya
    // Input Blocks
    puts("==========Progam Kursus==========");
    printf("\nJenis kursus yang tersedia");
    printf("\n1. Bahasa Inggris");
    printf("\n2. Bahasa Prancis");
    printf("\n3. Bahasa Jepang");
    printf("\n4. Bahasa Arab");
    printf("\n5. Bahasa Cina\n");
    printf("\nMasukkan Nama : "); gets(nama);
    printf("Masukkan No Anggota : "); gets(no_anggota);
    printf("Jenis Kursus yang diinginkan (1-5) : "); scanf("%i", &kursus);

    // Output Blocks
    system("cls"); // Bersihkan layar
    puts("===========Data Kursus==========");
    printf("\nNama : %s", nama);
    printf("\nNo Anggota : %s", no_anggota);
    printf("\n");
    /*
    Memasukkan harga dan nama tiap kursusnya
    berdasarkan nomor kursus yang diinput
    */
    if (kursus == 1){
        harga_kursus = 1000000;
        printf("\nNama Kursus : Bahasa Inggris");
    }else if (kursus == 2){
        harga_kursus = 2000000;
        printf("\nNama Kursus : Bahasa Prancis");
    }else if (kursus == 3){
        harga_kursus = 3000000;
        printf("\nNama Kursus : Bahasa Jepang");
    }else if (kursus == 4){
        harga_kursus = 4000000;
        printf("\nNama Kursus : Bahasa Arab");
    }else if (kursus == 5){
        harga_kursus = 5000000;
        printf("\nNama Kursus : Bahasa Cina");
    }else{
        system("cls"); // Bersihkan layar
        printf("Kursus tidak ditemukan!");
        exit(main); // Exit dari fungsi main
    }
    /*
    Menghitung biaya-biaya
    2,5%    = 0.025
    15%     = 0.15
    25%     = 0.25
    */
    modul   = 0.25 * harga_kursus;
    admin   = 0.15 * harga_kursus;
    kotor   = harga_kursus + modul + admin;
    pajak   = 0.025 * kotor;
    bersih  = pajak + kotor;

    // Menampilkan hasil perhitungan
    printf("\nBiaya Kursus : Rp. %2.f", harga_kursus);
    printf("\nBiaya Modul : Rp. %2.f", modul);
    printf("\nBiaya Administrasi : Rp. %2.f", admin);
    printf("\n");
    printf("\nSub Total : Rp. %2.f", kotor);
    printf("\nPajak : Rp. %2.f", pajak);
    printf("\n");
    printf("\nYang harus dibayarkan : Rp. %2.f", bersih);
    printf("\n");
}
