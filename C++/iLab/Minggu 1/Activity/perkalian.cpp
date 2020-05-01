// Program perkalian
#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel
    int a1, a2, hasil;
    
    // Input
    cout << "Masukan angka pertama: ";
    cin >> a1;
    
    cout << "Masukan angka kedua: ";
    cin >> a2;
    
    // New Line
    cout << endl;
    
    // Hitung
    hasil = a1 * a2;
    
    // Output
    cout << "Hasil: " << a1 << " x " << a2 << " = " << hasil << endl;

    return 0;
}