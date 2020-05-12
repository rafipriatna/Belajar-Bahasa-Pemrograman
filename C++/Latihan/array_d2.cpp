#include <iostream>
#include <iomanip>

/*
 * Nama     : Rafi Priatna K
 * NPM      : 15118760
 * Kelas    : 2KA31
 */

using namespace std;

int main() {
    int baris,kolom;
    int i,j;
    int data[10][10];

    cout <<"Jumlah Baris (1..10) : ";
    cin>>baris;

    cout <<"Jumlah Kolom (1..10) : ";
    cin>>kolom;
    for(i=0;i<=baris-1;i++){
        for(j=0;j<=kolom-1;j++){
            cout << "Nilai Baris " << i+1;
            cout << ", Kolom " << j+1 << " : " ;
            cin >> data[i][j];
        }
    }
    cout << "Data Matriks : \n";
    cout << endl;
    for (i=0;i<=baris-1;i++){
        for(j=0;j<=kolom-1;j++){
            cout << setw(8) << data[i][j];
        }
        cout << endl;
    }
    return 0;
}