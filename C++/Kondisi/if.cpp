#include <iostream>

using namespace std;

int main(){
    int a;

    cout << "Masukkan Angka : ";
    cin >> a;

    cout << a << endl;

    // Kondisi
    if (a == 10){
        cout << "Sepuluh" << endl;
    }else{
        cout << "Bukan Sepuluh" << endl;
    }

    return 0;
}