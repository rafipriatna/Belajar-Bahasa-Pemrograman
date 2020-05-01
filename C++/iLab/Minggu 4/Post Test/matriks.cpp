#include <iostream>
using namespace std;

int main(){

    //deklarasi variabel array matriks berdimensi 2
    int matriks [2][4] = {{1,2,3,4},{5,6,7,8}};
    int baris, kolom;

    //statement perulangan for untuk indeks array baris matriks
    for (baris=0;baris<2;baris++){
        for (kolom = 0; kolom < 4; kolom++){
            cout << matriks[baris][kolom] << " ";
        }
        cout<<endl;
    }
    return 0;
}