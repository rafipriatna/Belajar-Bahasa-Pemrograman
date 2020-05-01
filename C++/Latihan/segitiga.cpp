#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    int angka;

    // Input
    cout << "Masukkan angka : ";
    cin >> angka;

    cout << endl;

    // Perulangan segitiga
    for (int i = 1; i <= angka; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= angka; i++){
        for (int j = i; j <= angka-1; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}