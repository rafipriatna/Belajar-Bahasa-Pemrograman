/*
 * Soal     : Buatlah contoh program mengenai penerapan Fungsi
 * dan Procedure pada bahasa pemrograman C++.
 */
#include <iostream>
#include <string>

using namespace std;

// Fungsi & prosedur
void gantiVocal(string kata){

    // Output
    cout << "Bimsalabim => ";

    // Mengganti vocal dari kata yang diinput user
    for (int i = 0; i < kata.length(); i++){
        // Looping sebanyak panjang katanya
        if (kata[i] == 'a' || kata[i] == 'i' ||
            kata[i] == 'u' || kata[i] == 'e' ||
            kata[i] == 'o'){
                // Jika katanya mengandung a, i, u, e, o
                // Ganti ke i
                kata[i] = 'i';
        }
        cout << kata[i];
    }

    cout << endl; // baris baru
}

int berapaHuruf(string kata) {
    // Deklarasi variabel
    int totalHuruf;

    // Berapa huruf pada kata
    totalHuruf = kata.length();
    for (int i = 0; i < kata.length(); i++){
        if (kata[i] == ' '){
            totalHuruf -= 1;
        }
    }

    return totalHuruf;

}

int main(){
    // Judul
    cout << "====== :: Program Ganti Vocal :: ======" << endl;

    // Deklarasi variabel
    string kata;

    // Input
    cout << "Masukkan kata : ";
    getline(cin, kata); // Supaya bisa baca spasi

    cout << endl; // baris baru
    
    // Prosedur
    gantiVocal(kata);

    // Fungsi
    cout << "Kata tersebut mengandung " << berapaHuruf(kata) << " huruf";
    cout << endl;

    return 0;
}
