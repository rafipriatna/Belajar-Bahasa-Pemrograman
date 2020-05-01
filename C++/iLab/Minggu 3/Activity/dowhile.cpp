#include <iostream>
#include <string>

/*
 * Program perulangan do while untuk mengulang
 * suatu input
 */

using namespace std;

int main(){
    // Deklarasi variabel
    string nama;
    char status;

    // Perulangan
    do{
        // Input
        cout << "Masukkan namamu: ";
        cin >> nama;

        // Output
        cout << "Namamu adalah: " << nama << endl;

        cout << "Lagi [Y/N]? ";
        cin >> status;
    }while(status == 'y' || status == 'Y');

    cout << "Keluar dari loop" << endl;

    return 0;
}