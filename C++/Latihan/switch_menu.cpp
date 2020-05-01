/*
 * Soal     : Buatlah sebuah program dengan menggunakan fungsi switch...case
 * pada C++. Program yang dibuat adalah program menu untuk menghitung luas
 * lingkaran dan segitiga.
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    // Deklarasi variabel
    int pilihan_menu;

    // Variabel luas lingkaran
    int jari_jari;
    float luas_lingkaran;

    // Variabel luas segitiga
    int alas, tinggi;
    float luas_segitiga;

    // Judul
    cout << "=== :: Pilihan Menu dengan Switch Case :: ===\n\n";

    // Pilihan menu
    cout << "Pilihan menu : \n";
    cout << "1. Luas Lingkaran";
    cout << "\n2. Luas Segitiga";
    cout << "\n3. Keluar\n\n";

    // Input
    cout << "Menu yang dipilih : ";
    cin >> pilihan_menu;

    cout << endl; // Baris kosong sebagai spasi

    // Switch Case
    switch(pilihan_menu){
        case 1:
            // Jika pilih angka satu
            cout << "Luas Lingkaran\n\n";
            
            // Input
            cout << "Masukkan jari-jari lingkaran : ";
            cin >> jari_jari;

            // Hitung
            luas_lingkaran = 3.14 * jari_jari * jari_jari;

            // Output
            cout << "Luas Lingkaran = " << luas_lingkaran << " cm²" << endl;

            break;

        case 2:
            // Jika pilih angka dua
            cout << "Luas Segitiga\n\n";

            // Input
            cout << "Masukkan alas : ";
            cin >> alas;

            cout << "Masukkan tinggi : ";
            cin >> tinggi;

            // Hitung
            luas_segitiga = 0.5 * alas * tinggi;

            // Output
            cout << "Luas Segitiga = " << luas_segitiga << " cm²" << endl;

            break;

        case 3:
            // Jika pilih angka tiga
            cout << "Keluar dari program..." << endl;
            exit(0); // Keluar dari program

        default:
            cout << "Menu yang kamu pilih tidak ditemukan." << endl;
    }

    return 0;
}