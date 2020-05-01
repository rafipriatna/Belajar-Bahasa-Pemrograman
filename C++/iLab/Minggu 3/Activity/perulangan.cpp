#include <iostream>

/*
 * Pemakaian do while untuk menampilkan
 * tulisan C++ sebanyak 10 kali.
 */

using namespace std;

int main(){
    // Deklarasi variabel
    int i = 0;

    // Looping do while
    do{
        cout << "C++" << endl;
        i++; // i ditambah 1 tiap loop
    }while(i < 10);

    return 0;
}