#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    int angka;

    // Input
    cout << "Masukkan angka untuk mengetahui hari apa(1-7): ";
    cin >> angka;

    // Pengkondisian
    switch (angka){
        case 1:
            cout << "Hari ke " << angka << " : Senin" << endl;
            break;
        case 2:
            cout << "Hari ke " << angka << " : Selasa" << endl;
            break;
        case 3:
            cout << "Hari ke " << angka << " : Rabu" << endl;
            break;
        case 4:
            cout << "Hari ke " << angka << " : Kamis" << endl;
            break;
        case 5:
            cout << "Hari ke " << angka << " : Jum'at" << endl;
            break;
        case 6:
            cout << "Hari ke " << angka << " : Sabtu" << endl;
            break;
        case 7:
            cout << "Hari ke " << angka << " : Minggu" << endl;
            break;
        
        default :
            cout << "Tidak ada hari ke " << angka << endl;
    }

    return 0;
}