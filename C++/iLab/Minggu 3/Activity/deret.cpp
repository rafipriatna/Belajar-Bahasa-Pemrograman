#include <iostream>

/*
 * Program menampilkan bilangan genap yang nilainya
 * kurang dari atau sama dengan n dan
 * ditampilkan dari yang terbesar
 * terbesar menuju nol
 */

using namespace std;

int main(){
    // Deklarasi variabel
    int n;

    // Judul
    cout << "Menampilkan deret genap" << endl;
    cout << "kurang dari atau sama dengan n" << endl;

    // Input
    cout << "Masukkan nilai= ";
    cin >> n;

    // Pengkondisian
    if (n % 2){
        // Jika n adalah bilangan ganjil
        // Kurangi n sebesar 1;
        n--;
    }
    // Tampilkan deret bilangan genap dari besar ke kecil
    for (n = n; n >= 0; n-=2){
        cout << n << " ";
    }
    return 0;
}