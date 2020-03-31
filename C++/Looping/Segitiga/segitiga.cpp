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
        
        for(int j = 1; j <= i; j++){
            /*
                Loping ke kanan
                Membuat perulangan dari 1 ke angka pada var i
                
                j = 1, looping hingga j sama dengan 1 (i = 1)
                Berarti j nya ditambah 1 tiap looping
            */
            cout << "* ";
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

        for(int j = n; j >= i; j--){
            /*
                Loping ke kanan
                Membuat perulangan dari n ke angka pada var i
                Tapi Menurun
                
                j = n (angka yang diinput), looping hingga j sama dengan 1 (i = 1)
                Berarti j nya dikurang 1 tiap looping
            */
            cout << "* ";
        }
        cout << endl; // Looping ke bawah akan mencetak Enter
    }

    cout << "\n";

    cout << "Segitiga 3\n\n";
    
    // *****
    //  ****
    //   ***
    //    **
    //     *

    for(int i = 1; i <= n; i++){
        /*
            Looping ke bawah
            Membuat perulangan 1 ke n (angka yang diinput)
        */

        for (int j = 1; j <= i; j++){
            // For pertama cetak spasi sebelah kiri
            // J = 1, looping hingga j = 1 (i = 1);
            cout << " ";
        }
        for (int k = n; k >= i; k--){
            // For kedua cetak bintangnya
            // K = n (angka yg diinput), looping hingga k = 1 (i = 1)
            // Berarti k nya dikurangin 1 tiap loop
            cout << "*";
        }
        cout << endl; // Looping ke bawah akan mencetak Enter
    }

    cout << "\n";

    cout << "Segitiga 4\n\n";
    
    // *****
    //  ****
    //   ***
    //    **
    //     *

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
        for (int k = 1; k <= i; k++){
            // For kedua cetak bintangnya
            // K = 1, looping hingga k = 1 (i = 1)
            cout << "*";
        }
        cout << endl; // Looping ke bawah akan mencetak Enter
    }

    return 0;
}