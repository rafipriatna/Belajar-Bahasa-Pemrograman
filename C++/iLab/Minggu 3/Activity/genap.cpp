#include <iostream>

/*
 * Pemakaian while untuk menampilkan
 * bilangan genap antara 2 dan 16
 */

using namespace std;

int main(){
    // Deklarasi variabel
    int bil = 2;

    // Looping while
    while (bil <= 16){
        // Selama bil nilainya <= 16
        cout << bil << endl;
        // Tambahkan 2 pada nilai bil tiap loop
        bil += 2;
    }

    return 0;
    
}