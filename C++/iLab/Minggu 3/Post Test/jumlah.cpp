#include <iostream>

/*
 * Penjumalahan 5 angka yang diinput user
 */

using namespace std;

int main(){
    // Deklarasi variabel
    int angka, jumlah = 0;

    // Judul
    cout << "Program menambahkan 5 bilangan bulat" << endl;

    // Perulangan
    for(int i = 1; i <= 5; i++){
        // Input
        cout << "Masukkan angka : ";
        cin >> angka;

        // Hitung
        jumlah += angka;
    }

    // Output
    cout << "Hasil Penjumlahan : " << jumlah << endl;

    return 0;
}