#include <iostream>

using namespace std;

int main(){
    int a;

    cout << "Masukkan nilai : ";
    cin >> a;

    // Kondisi
    switch (a){
        case 10:
            cout << "Sepuluh" << endl;
            break;
        case 20:
            cout << "Dua puluh" << endl;
            break;
        default:
            cout << "Angka ga bener" << endl;
    }
    return 0;
}