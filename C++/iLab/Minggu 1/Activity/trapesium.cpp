// Program luas trapesium
#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel
    int a, b, t, luas;
    
    // Input
    cout << "Masukkan sisi a: ";
    cin >> a;
    cout << "Masukkan sisi b: ";
    cin >> b;
    cout << "Masukkan tinggi: ";
    cin >> t;
    
    // Hitung
    luas = 0.5 * (a + b) * t;
    
    // Output
    cout << "\nLuas trapesium: " << luas << endl;

    return 0;
}