/*
 * Soal     : Buatlah program dengan fungsi if...else pada C++ untuk
 * mengecek dua buah angka yang di masukkan oleh user.
 * Jika angka pertama yang dimasukkan lebih besar dari angka
 * kedua, maka keterangan Angka pertama lebih besar dari angka kedua.
 * Dan begitu sebaliknya.
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    // Deklarasi variabel
    int angka_pertama, angka_kedua;
    string keterangan_angka;

    // Judul
    cout << "=== :: Komparasi dua angka :: ===\n\n";

    // Input
    cout << "Masukkan angka pertama : ";
    cin >> angka_pertama;

    cout << "Masukkan angka kedua : ";
    cin >> angka_kedua;

    // Pengkondisian
    if (angka_pertama > angka_kedua){
        keterangan_angka = "lebih besar";
    }else{
        keterangan_angka = "lebih kecil";
    }

    cout << endl; // Baris kosong sebagai spasi

    // Output
    cout << "Angka pertama " << keterangan_angka << " dari angka kedua." << endl;

    return 0;
}