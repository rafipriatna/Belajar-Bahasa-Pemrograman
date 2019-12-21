/*
 * UTS Kode : A
 *
 * Buatlah program menggunakan perintah array, struct, if, dan for dengan
 * output sbb :
 *
 * Banyaknya Data  : <input>
 * Data ke-1
 * Nama Pembeli    : <input>
 * Alamat          : <input>
 * Type rumah      : <input>
 * Harga           : <proses>
 * Pajak           : <proses>
 * Total           : <proses>
 *
 * Ketentuan :
 * Type rumah      Harga
 * ---------------------
 * Mawar           300
 * Melati          500
 * Anggrek         1000
 * Bougenvile      1200
 *
 * Pajak sebesar 15% dari harga
 *
 */

#include <stdio.h>
#include <string.h>

struct data_penjualan{
    char nama[20], alamat[20], tipe[20];
    float harga, pajak, total;
};

void main(){
    // Deklarasi variabel
    char ulang;
    int i, jumlah_data;
    int akhir = 1;

    // Array
    struct data_penjualan my_data[100];

    /*
     * Membuat perulangan do while
     * Supaya bisa mengulang programnya jika sudah selesai
     */
    do {
        /*
         *  gunakan system("cls"); jika kamu menggunakan OS Windows
         *  gunakan system("clear"); jika kamu menggunakan GNU / Linux
         */
        system("clear"); // Untuk membersihkan layar
        printf("INPUT DATA PENJUALAN RUMAH\n\n"); // Judul
        // Input blocks
        printf("Banyaknya data : ");scanf("%d", &jumlah_data);
        getchar(); // Supaya fgets dapat digunakan

        mulai: // Label untuk menandakan dimulainya program

        // Perulangan sampai jumlah data
        for (i = akhir; i <= jumlah_data; i++){
            system("clear"); // Untuk membersihkan layar
            printf("INPUT DATA PENJUALAN RUMAH\n\n"); // Judul
            printf("Data ke-%i", i);
            printf("\nNama Pembeli  : ");fgets(my_data[i].nama, 20, stdin);
            printf("Alamat          : ");fgets(my_data[i].alamat, 20, stdin);
            printf("Tipe Rumah      : ");fgets(my_data[i].tipe, 20, stdin);

            /* Penjelasan tentang strcasecmp() ada di bawah :)
             * Mencoba memberi pemberitahuan jika tipe rumah yang diinput tidak ada
             * Rencanya mau pakai logika || (or), namun tidka berhasil
             * AKhirnya, pakai if seperti ini
             */
            if (strcasecmp(my_data[i].tipe, "Mawar") != 10){
                if (strcasecmp(my_data[i].tipe, "Melati") != 10){
                    if (strcasecmp(my_data[i].tipe, "Anggrek") != 10){
                        if (strcasecmp(my_data[i].tipe, "Bougenvile") != 10){
                            system("clear");
                            printf("\nTipe rumah tidak ditemukan!");
                            printf("\nIngin mengulangi lagi (y/n)? ");scanf("%c", &ulang);
                            // Jika ulang = Y atau ulang = Y
                            if (ulang == 'Y' || ulang == 'y'){
                                system("clear"); // Bersihkan layar
                                akhir = i; // Isi variabel akhir dengan perulangan for terakhir
                                getchar(); // Supaya fgets dapat digunakan
                                goto mulai; // Balik ke label mulai
                                // Jika ulang = selain Y atau y
                            }else{
                                exit(main); // Exit dari fungsi main atau keluar dari program
                            } // end if
                        } // end if != bougenvile
                    } // end if != anggrek
                } // end if != melati
            } // end if != mawar
        } // end for

        // Output blocks
        system("clear"); // Untuk membersihkan layar
        printf("INPUT DATA PENJUALAN RUMAH\n\n"); // Judul
        // Perulangan sampai jumlah data
        for (i = 1; i <= jumlah_data; i++){
            /* Menentukan harga rumah berasarkan tipe rumah yang diinput
             *
             * strcasecmp() adalah fungsi untuk membandingkan string1 dan string 2 dan tidak case sensitive
             * akan mengembalikan menjadi 0 jika nilai ASCII string1 dan string2 itu sama
             * akan mengembalikan menjadi negatif (-1, -2 dst...) jika nilai ASCII string1 < string2
             * akan mengembalikan menjadi positif (1, 2 dst...) jika nilai ASCII string1 > string2
             *
             * Dalam hal ini, saya menggunakan 10 bukan 0 untuk membandingkan string
             * karena saya menggunakan fgets, di mana fgets tidak menghapus newline pada string
             * sehingga didapat return 10 bukan 0
             *
             */

            if (strcasecmp(my_data[i].tipe, "Mawar") == 10){
                my_data[i].harga = 300;
            }else if (strcasecmp(my_data[i].tipe, "Melati") == 10){
                my_data[i].harga = 500;
            }else if (strcasecmp(my_data[i].tipe, "Anggrek") == 10){
                my_data[i].harga = 1000;
            }else if (strcasecmp(my_data[i].tipe, "Bougenvile") == 10){
                my_data[i].harga = 1200;
            }

            /*
             * Menghitung pajak dan total.
             * Pajak = 15% dari harga
             * Total = Harga + pajak
             */
            my_data[i].pajak = 0.15 * my_data[i].harga;
            my_data[i].total = my_data[i].harga + my_data[i].pajak;

            // Tampilkan hasil perhitungan ke layar
            printf("Data ke-%i", i);
            printf("\nTipe Rumah   : %s", my_data[i].tipe);
            printf("Harga        : %2.f", my_data[i].harga);
            printf("\nPajak        : %2.f", my_data[i].pajak);
            printf("\nTotal        : %2.f", my_data[i].total);
            printf("\n\n");
        } // end for
        printf("\nApakah kamu ingin mengulangi program (y/n)? ");scanf("%c", &ulang);
    } // end do
    /*
     * Jika ulang = Y atau ulang = Y
     * Maka, balik lagi ke awal do
     */
    while (ulang == 'y' || ulang == 'Y');
}
