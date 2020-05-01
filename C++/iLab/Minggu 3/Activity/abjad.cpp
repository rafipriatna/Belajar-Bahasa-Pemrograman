#include <iostream>

/*
 * Menampilkan abjad A sampai Z
 * menggunakan do while
 */

using namespace std;

int main(){
    // Deklarasi variabel
    char abjad = 'A';

    // Looping
    do{
        cout << abjad;
        abjad++;
    }while(abjad <= 'Z');

    return 0;
}