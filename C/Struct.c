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

/*
Struct
Kumpulan dari beberapa variabel yang tipe datanya beragam
*/
struct data_kursus{
    char nama[15], no_anggota[8];
    float harga_kursus, modul, admin, kotor, pajak, bersih;
    int kursus;
};

void main (){
    /*
    Struct lagi
    Kita bisa menggunakan my_data untuk menggunakan variabel di data_kursus
    */
    struct data_kursus my_data[75];

    // Deklarasi Variabel
    char ulang;
    int i, jumlah_data, akhir;

    /*
    Membuat perulangan do while
    supaya bisa mengulang programnya jika sudah selesai
    */
    do {
        system("cls"); // Bersihkan layar
        puts("==========Progam Kursus==========");
        printf("Masukkan jumlah data yang diinput : ");scanf("\n%d", &jumlah_data);

        // Mulai Programnya
        akhir = 0; // Default untuk value awal dari variabel i
        mulai: // Label untuk menandakan dimulainya program
        for(i = akhir; i < jumlah_data; i++){
            // Input Blocks
            system("cls"); // Bersihkan layar
            puts("==========Progam Kursus==========");
            printf("Data ke-%i", i+1);
            printf("\nJenis kursus yang tersedia :");
            printf("\n1. Bahasa Inggris");
            printf("\n2. Bahasa Prancis");
            printf("\n3. Bahasa Jepang");
            printf("\n4. Bahasa Arab");
            printf("\n5. Bahasa Cina\n");
            fflush(stdin); // Bersihkan stdin
            printf("\nMasukkan Nama : "); gets(my_data[i].nama);
            printf("Masukkan No Anggota : "); gets(my_data[i].no_anggota);
            printf("Jenis Kursus yang diinginkan (1-5) : "); scanf("%i", &my_data[i].kursus);
            fflush(stdin); // Bersihkan stdin

            /*
            Jika angka kursus yang dimasukkan tidak ada
            Angka maksimal ada 5, karena hanya punya 5 kursus bahasa
            Jika > 5 berarti kursusnya tidak ditemukan
            */
            if (my_data[i].kursus > 5){
                system("cls"); // Bersihkan layar
                puts("===========Progam Kursus==========");
                printf("\nKursus tidak ditemukan!");
                printf("\nIngin mengulangi lagi (y/n)? ");scanf("%c", &ulang);
                // Jika ulang = Y atau ulang = Y
                if (ulang == 'Y' || ulang == 'y'){
                    system("cls"); // Bersihkan layar
                    akhir = i; // Isi variabel akhir dengan perulangan for terakhir
                    goto mulai; // Balik ke label mulai
                // Jika ulang = selain Y atau y
                }else{
                    exit(main); // Exit dari fungsi main atau keluar dari program
                } // end if
            } // end if
        } // end for

        // Output Blocks
        system("cls"); // Bersihkan layar
        for(i = 0; i < jumlah_data; i++){
            // Memberi pembatas
            if (i == 0){
                // Output pertama
                puts("===========Data Kursus==========");
            }else{
                // Output setelah pertama
                puts("\n================================");
            }
            printf("Data ke-%i", i+1);
            printf("\nNama : %s", my_data[i].nama);
            printf("\nNo Anggota : %s", my_data[i].no_anggota);
            printf("\n");

            /*
            Memasukkan harga dan nama tiap kursusnya
            berdasarkan nomor kursus yang diinput
            */
            switch(my_data[i].kursus){
            case 1 :
                my_data[i].harga_kursus = 1000000;
                printf("\nNama Kursus : Bahasa Inggris");
                break;
            case 2 :
                my_data[i].harga_kursus = 2000000;
                printf("\nNama Kursus : Bahasa Prancis");
                break;
            case 3 :
                my_data[i].harga_kursus = 3000000;
                printf("\nNama Kursus : Bahasa Jepang");
                break;
            case 4 :
                my_data[i].harga_kursus = 4000000;
                printf("\nNama Kursus : Bahasa Arab");
                break;
            case 5 :
                my_data[i].harga_kursus = 5000000;
                printf("\nNama Kursus : Bahasa Cina");
                break;
            default :
                system("cls"); // Bersihkan layar
                printf("\nKursus tidak ditemukan!");
            }

            /*
            Menghitung biaya-biaya
            2,5%    = 0.025
            15%     = 0.15
            25%     = 0.25
            */
            my_data[i].modul   = 0.25 * my_data[i].harga_kursus;
            my_data[i].admin   = 0.15 * my_data[i].harga_kursus;
            my_data[i].kotor   = my_data[i].harga_kursus + my_data[i].modul + my_data[i].admin;
            my_data[i].pajak   = 0.025 * my_data[i].kotor;
            my_data[i].bersih  = my_data[i].pajak + my_data[i].kotor;

            // Menampilkan hasil perhitungan
            printf("\nBiaya Kursus : Rp. %2.f", my_data[i].harga_kursus);
            printf("\nBiaya Modul : Rp. %2.f", my_data[i].modul);
            printf("\nBiaya Administrasi : Rp. %2.f", my_data[i].admin);
            printf("\n");
            printf("\nSub Total : Rp. %2.f", my_data[i].kotor);
            printf("\nPajak : Rp. %2.f", my_data[i].pajak);
            printf("\n");
            printf("\nYang harus dibayarkan : Rp. %2.f", my_data[i].bersih);
            printf("\n");
        } // end for
        printf("\nApakah kamu ingin mengulangi program (y/n)? ");scanf("%c", &ulang);
    } // end do
    /*
    Jika ulang = Y atau ulang = Y
    Maka, balik lagi ke awal do
    */
    while (ulang == 'y' || ulang == 'Y');
}
