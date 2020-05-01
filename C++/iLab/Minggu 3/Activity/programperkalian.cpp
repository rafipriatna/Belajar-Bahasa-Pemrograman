#include <iostream>

/*
 * Program perkalian denfan for loop
 */

using namespace std;

int main(){
    // Deklarasi variabel
    int i, n, jumlah, batas = 10;

    // Judul
    cout << "program menampilkan perkalian bilangan" << endl;

    // Input
    cout << "Bilangan yang akan dikalikan : ";
    cin >> n;

    cout << endl; // Membuat baris kosong

    // Output
    cout << "Menampilkan Hasil Perkalian : " << endl;

    // Looping
    for (i = 0; i <= batas; i++){
        jumlah = i*n; // i dikali bilangan yang akan dikalikan
        cout << i << "*" << n << "=" << jumlah << endl;
    }

    return 0;
}