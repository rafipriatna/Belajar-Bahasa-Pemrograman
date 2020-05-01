#include <iostream>

using namespace std;

int main(){
    // Judul
    cout << "=== Program Pembayaran ===" << endl;

    // Deklarasi variabel
    unsigned int total_belanja;

    // Input
    cout << "Masukkan total belanja: ";
    cin >> total_belanja;

    // Pengkondisian
    if (total_belanja > 150000){
        // Jika total belanja lebih dari 150.000
        cout << "Selamat! Anda dapat hadiah" << endl;
    }

    cout << "Terima kasih sudah berbelanja di toko kami" << endl;

    return 0;
}