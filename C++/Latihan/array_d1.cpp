#include <iostream>
#include <iomanip>

/*
 * Nama     : Rafi Priatna K
 * NPM      : 15118760
 * Kelas    : 2KA31
 */

using namespace std;

int main() {
    int K[1000];
    int i,n;

    cout << "Banyaknya Jumlah Elemen Array = " ;
    cin >> (n);

    for(i=0;i<=n-1;i++) {
        cout<<"Elemen Array ["<<i<<"] =";
        cin >>K[i];
    }
    cout <<"Isi Elemen array adalah :" <<endl;
    for (i=0;i<=n-1;i++){
        cout << setw(10) <<K[i]<<endl;
    }
}
