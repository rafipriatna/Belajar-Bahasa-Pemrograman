// Program ungkapan yang melibatkan beberapa tipe data
#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel
    int jumlah;
    float harga_per_unit;
    double harga_total;
    
    // Isi variabel
    jumlah = 5;
    harga_per_unit = 5203.02;
    harga_total = harga_per_unit * jumlah;
    
    // Output
    cout << "Harga total =  " << harga_total << endl;
    
    return 0;
}