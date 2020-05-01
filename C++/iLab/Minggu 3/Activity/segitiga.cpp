#include <iostream>

/*
 * Membentuk segitiga yang berisi karakter *
 * dengan menggunakan for di dalam for.
 */

using namespace std;

int main(){
    // Deklarasi variabel
    int tinggi, baris, kolom;

    // Input
    cout << "Tinggi segitiga = ";
    cin >> tinggi;

    cout << endl; // Membuat baris kosong

    // Looping
    for (baris = 1; baris <= tinggi; baris++){
        for (kolom = 1; kolom <= baris; kolom++){
            cout << "*"; // Membuat karakter *
        }
        cout << endl; // Membuat baris kosong
    }

    return 0;
}