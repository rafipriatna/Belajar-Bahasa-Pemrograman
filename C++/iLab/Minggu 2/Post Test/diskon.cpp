#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    double total_beli, potongan, jumlah_bayar;

    // Input
    cout << "Total Pembelian Rp. ";
    cin >> total_beli;

    // Pengkondisian
    if (total_beli >= 50000){
        potongan = 0.2 * total_beli;
    }else{
        potongan = 0.05 * total_beli;
    }

    // Kurangi total beli dengan potongan
    jumlah_bayar = total_beli - potongan;

    // Output
    cout << "Besar Potongan Rp. " << potongan << endl;
    cout << "Jumlah yang harus dibayarkan Rp. " << jumlah_bayar << endl;

    return 0;
}