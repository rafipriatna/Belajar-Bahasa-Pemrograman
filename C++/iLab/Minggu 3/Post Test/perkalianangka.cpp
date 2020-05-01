#include <iostream>

/*
 * Looping kelipatan angka yang
 * diinput user
 */

using namespace std;

int main(){
    // Deklarasi variabel
    float b;
    int x, z;

    // Input
    cout << "Masukkan Angka Awal : ";
    cin >> b;

    cout << "Masukkan Angka Kedua : ";
    cin >> x;

    cout << "Batas Akhir Angka   : ";
    cin >> z;

    // Perulangan
    do{
        cout << b << endl;
        b *= x;
    }while(b <= z);

    return 0;
}