#include <iostream>

using namespace std;

int main(){

    //[1] deklarasi variabel bilangan bertipe array 2 dimensi dengan ordo 2*2
    int bilangan[2][2];

    //pemberian nilai elemen pada matriks sesuai indeks
    bilangan[0][0] = 100;
    bilangan[0][1] = 101;
    bilangan[1][0] = 110;
    bilangan[1][1] = 111;

    //menampilkan nilai matriks dengan memanggil variabel array sesuai indeks
    cout<< "Isi array bilangan: \n";
    cout<< bilangan[0][0] << " " << bilangan[0][1];
    cout<< "\n" << bilangan[1][0] << " " << bilangan[1][1];

    return 0;
}