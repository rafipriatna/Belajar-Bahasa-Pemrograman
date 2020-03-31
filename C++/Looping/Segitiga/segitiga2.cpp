#include <iostream>

using namespace std;

int main(){

    /*
        Ada 2 buah looping.
        Looping pertama itu ke bawah
        Looping kedua itu ke kanan
    */

    int n, i;

    cout << "Masukkan angka : ";
    cin >> n;

    cout << "\n";

    cout << "Segitiga 1\n\n";
    for(int i = 1; i <= n; i++){
        /*
            Looping ke bawah
            Membuat perulangan 1 ke n (angka yang diinput)
        */

        for (int j = n; j >= i; j--){
            // For pertama cetak spasi sebelah kiri
            // J = n (angka yg diinput), looping hingga j = 1 (i = 1);
            // Berarti J nya dikurangin 1 tiap loop
            cout << " ";
        }
        for (int k = 1; k <= (2*i - 1); k++){
            // For kedua cetak bintangnya
            // K = 1, looping hingga k = deret 2 x i - 1
            // Misal i = 1 => 2 x 1 - 1 => 1
            // Misal i = 2 => 2 x 2 - 1 => 3
            cout << "*";
        }

        cout << endl; // Looping ke bawah akan mencetak Enter
    }

    cout << "\n";

    cout << "Segitiga 2\n\n";
    for(int i = 1; i <= n; i++){
        /*
            Looping ke bawah
            Membuat perulangan 1 ke n (angka yang diinput)
        */

        for (int j = 1; j <= i; j++){
            // For pertama cetak spasi sebelah kiri
            // J = n (angka yg diinput), looping hingga j = 1 (i = 1);
            // Berarti J nya dikurangin 1 tiap loop
            cout << " ";
        }
        for (int k = n; k >= (2*i -n); k--){
            // For kedua cetak bintangnya
            // K = 1, looping hingga k = deret 2 x i - 1
            // Misal i = 1 => 2 x 1 - 1 => 1
            // Misal i = 2 => 2 x 2 - 1 => 3
            cout << "*";
        }

        cout << endl; // Looping ke bawah akan mencetak Enter
    }

    cout << "\n";

    cout << "Segitiga 3\n\n";
    for(int i = 1; i <= n; i++){
        /*
            Looping ke bawah
            Membuat perulangan 1 ke n (angka yang diinput)
        */

        for (int j = n; j >= i; j--){
            // For pertama cetak spasi sebelah kiri
            // J = n (angka yg diinput), looping hingga j = 1 (i = 1);
            // Berarti J nya dikurangin 1 tiap loop
            cout << " ";
        }
        for (int k = 1; k <= (2*i - 1); k++){
            // For kedua cetak bintangnya
            // K = 1, looping hingga k = deret 2 x i - 1
            // Misal i = 1 => 2 x 1 - 1 => 1
            // Misal i = 2 => 2 x 2 - 1 => 3
            cout << "*";
        }

        cout << endl; // Looping ke bawah akan mencetak Enter
    }
    for(int i = 2; i <= n; i++){
        /*
            Looping ke bawah
            Membuat perulangan 1 ke n (angka yang diinput)
        */

        for (int j = 1; j <= i; j++){
            // For pertama cetak spasi sebelah kiri
            // J = n (angka yg diinput), looping hingga j = 1 (i = 1);
            // Berarti J nya dikurangin 1 tiap loop
            cout << " ";
        }
        for (int k = n; k >= (2*i -n); k--){
            // For kedua cetak bintangnya
            // K = 1, looping hingga k = deret 2 x i - 1
            // Misal i = 1 => 2 x 1 - 1 => 1
            // Misal i = 2 => 2 x 2 - 1 => 3
            cout << "*";
        }

        cout << endl; // Looping ke bawah akan mencetak Enter
    }



    return 0;
}