#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    const int JUM_ELEMEN = 5;
    float suhu[JUM_ELEMEN], rata_rata, total;

    // Input
    cout << "Masukkan " << JUM_ELEMEN << " data suhu" << endl;
    
    // Looping input
    for (int i = 0; i < JUM_ELEMEN; i++){
        cout << i + 1 << " : ";
        cin >> suhu[i];
    }

    // Hitung rata-rata suhu
    for (int i = 0; i < JUM_ELEMEN; i++){
        total += suhu[i];
    }
    
    rata_rata =  total / JUM_ELEMEN;

    // Output isi array
    cout << "Suhu rata-rata: " << rata_rata << endl;

    return 0;
}