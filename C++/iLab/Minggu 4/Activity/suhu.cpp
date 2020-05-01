#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    const int JUM_ELEMEN = 5;
    float suhu[JUM_ELEMEN];

    // Input
    cout << "Masukkan " << JUM_ELEMEN << " data suhu" << endl;
    
    // Looping input
    for (int i = 0; i < JUM_ELEMEN; i++){
        cout << i + 1 << " : ";
        cin >> suhu[i];
    }

    // Output isi array
    cout << "Data suhu yang Anda masukkan" << endl;
    
    // Looping output
    for (int i = 0; i < JUM_ELEMEN; i++){
        cout << suhu[i] << endl;
    }

    return 0;
}