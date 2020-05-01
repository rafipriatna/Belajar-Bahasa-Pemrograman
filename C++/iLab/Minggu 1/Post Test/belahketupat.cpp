// Program belah ketupat
#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel
    int d1, d2, luas;
    
    // Input
    cout << "Masukkan panjang diameter 1: ";
    cin >> d1;
    
    cout << "Masukkan panjang diameter 2: ";
    cin >> d2;
    
    // Hitung
    luas = 0.5 * d1 * d2;
    
    // Output
    cout << "\nLuas belah ketupat: " << luas << endl;
    
    return 0;
}