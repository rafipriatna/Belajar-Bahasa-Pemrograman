#include <iostream>

using namespace std;

// Deklarasi fungsi
float tambah(float x, float y);

int main(){
    // Deklarasi variabel
    float a, b, c;

    // Input
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    // Hitung || Pemanggilan fungsi tambah
    c = tambah(a, b);

    // Output
    cout << "\n A + B = " << c;
    return 0;
}

float tambah(float x, float y){
    return (x + y);
}