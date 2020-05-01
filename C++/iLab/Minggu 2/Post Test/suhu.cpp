#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    int suhu;

    // Input
    cout << "Masukkan suhu : ";
    cin >> suhu;

    // Pengkondisian switch
    switch(suhu){
        case 0:
            cout << "Dingin" << endl;
            break;
        case 25:
            cout << "Sejuk" << endl;
            break;
        case 30:
            cout << "Panas" << endl;
            break;
        default:
            cout << "Suhu tidak diketahui";
    }

    return 0;
}