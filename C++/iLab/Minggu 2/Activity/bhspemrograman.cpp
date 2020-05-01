#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    int pilihan;

    // Pilihan menu
    cout << "Daftar bahasa pemrograman:\n";
    cout << "1. Java\n2. C++\n3. PHP\n";

    // Label untuk repeat
    ulangi:

    // Input
    cout << "Masukkan pilihan Anda (1-3): ";
    cin >> pilihan;

    // Pengkondisian
    switch (pilihan){
        // Java
        case 1:
            cout << "Anda memilih Pemrograman Java" << endl;
            break;
        // C++
        case 2:
            cout << "Anda memilih Pemrograman C++" << endl;
            break;
        // PHP
        case 3:
            cout << "Anda memilih Pemrograman PHP" << endl;
            break;

        default:
            goto ulangi;
    }

    return 0;
}