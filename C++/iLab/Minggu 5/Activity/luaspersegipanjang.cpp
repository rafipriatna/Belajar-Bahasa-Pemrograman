#include <iostream>

using namespace std;

// Deklarasi fungsi
int hitung_luas(int panjang, int lebar);

int main(){
    // Deklarasi variabel
    int a,b,hasil;
    
    // Judul program
    cout << "Program Hitung Luas Persegi Panjang" << endl;
    cout << "-----------------------------------" << endl;

    // Input
    cout << "Masukkan nilai panjang :";
    cin >> a;
    cout << "Masukkan nilai lebar :";
    cin >> b;

    // Hitung
    hasil = hitung_luas(a, b);
    
    // Output
    cout << "Luas persegi panjang adalah :" << hasil << endl;
    return 0;
}

int hitung_luas(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}