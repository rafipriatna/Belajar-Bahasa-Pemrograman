#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    int bilangan;

    // Input
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    // Pengkondisian
    if (bilangan % 2){
        cout << "Bilangan: " << bilangan << " tidak habis dibagi 2" << endl;
        cout << "Jadi termasuk bilangan ganjil" << endl;
    }else{
        cout << "Bilangan: " << bilangan << " habis dibagi 2" << endl;
        cout << "Jadi termasuk bilangan genap" << endl;
    }

    return 0;
}