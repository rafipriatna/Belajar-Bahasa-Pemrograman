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
    char nama[15], no_anggota[8], ulang;
    int kursus;
    float harga_kursus, modul, admin, kotor, pajak, bersih;

    // Mulai Programnya
    mulai: // Label untuk menandakan dimulainya program
    /*
    Membuat perulangan do while
    supaya bisa mengulang programnya jika sudah selesai
    */
    do {
        // Input Blocks
        system("cls"); // Bersihkan layar
        puts("==========Progam Kursus==========");
        printf("\nJenis kursus yang tersedia :");
        printf("\n1. Bahasa Inggris");
        printf("\n2. Bahasa Prancis");
        printf("\n3. Bahasa Jepang");
        printf("\n4. Bahasa Arab");
        printf("\n5. Bahasa Cina\n");
        fflush(stdin); // Bersihkan stdin
        printf("\nMasukkan Nama : "); gets(nama);
        printf("Masukkan No Anggota : "); gets(no_anggota);
        printf("Jenis Kursus yang diinginkan (1-5) : "); scanf("%i", &kursus);
        fflush(stdin); // Bersihkan stdin

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
        switch(kursus){
        case 1 :
            harga_kursus = 1000000;
            printf("\nNama Kursus : Bahasa Inggris");
            break;
        case 2 :
            harga_kursus = 2000000;
            printf("\nNama Kursus : Bahasa Prancis");
            break;
        case 3 :
            harga_kursus = 3000000;
            printf("\nNama Kursus : Bahasa Jepang");
            break;
        case 4 :
            harga_kursus = 4000000;
            printf("\nNama Kursus : Bahasa Arab");
            break;
        case 5 :
            harga_kursus = 5000000;
            printf("\nNama Kursus : Bahasa Cina");
            break;
        default :
            system("cls"); // Bersihkan layar
            puts("===========Progam Kursus==========");
            printf("\nKursus tidak ditemukan!");
            printf("\nIngin mengulangi lagi (y/n)? ");scanf("%c", &ulang);
            // Jika ulang = Y atau ulang = Y
            if (ulang == 'Y' || ulang == 'y'){
                system("cls"); // Bersihkan layar
                goto mulai;
            // Jika ulang = selain Y atau y
            }else{
                exit(main); // Exit dari fungsi main
            }
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
        printf("\nApakah kamu ingin mengulangi program (y/n)? ");scanf("%c", &ulang);
    }
    // Jika ulang = Y atau ulang = Y
    while (ulang == 'y' || ulang == 'Y');
}
