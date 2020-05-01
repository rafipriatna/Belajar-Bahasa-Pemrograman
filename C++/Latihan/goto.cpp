/*
 * Soal     : Buatlah program dengan fungsi GOTO pada C++.
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    // Deklarasi variabel
    string nama;
    char ulang;

    // Label untuk goto
    ulangi:

    // Input
    cout << "Masukkan nama kamu : ";
    cin >> nama;

    // Output
    cout << "Halo " << nama << " ini adalah C++ Goto." << endl;

    // Tanya goto
    cout << "Ulangi lagi [Y/N] ? ";
    cin >> ulang;
    
    // Pengkondisian ulang
    if (ulang == 'Y' || ulang == 'y'){
        goto ulangi;
    }

    return 0;
}