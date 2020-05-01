#include <iostream>

/*
 * Deret hitungan
 */

using namespace std;

int main(){
    // Deklarasi variabel
    int sampai = 0;

    // Input
    cout << "Lakukan penghitungan sampai : ";
    cin >> sampai;

    // For Loop
    for (int i = 1; i <= sampai; i++){
        cout << i << endl;
    }

    return 0;
}