// Program luas & keliling lingkaran
#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel
    const float PHI = 3.141592;
    float jari_jari, luas, keliling;
    
    // Isi variabel
    jari_jari = 10;
    
    // Hitung
    luas = PHI * jari_jari * jari_jari;
    keliling = 2 * PHI * jari_jari;
    
    // Output
    cout << "Luas = " << luas << endl;
    cout << "Keliling = " << keliling << endl;
    
    return 0;
}