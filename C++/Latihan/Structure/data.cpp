#include <iostream>
#include <iomanip>

using namespace std;

struct dataUser{
    string nik, nama, bagian, golongan;
};

void tabel(dataUser myData[]);

int main(){
    struct dataUser myData[3];

    myData[0].nik = "001";
    myData[0].nama = "Adi";
    myData[0].bagian = "Personalia";
    myData[0].golongan = "3A";

    myData[1].nik = "002";
    myData[1].nama = "Ade";
    myData[1].bagian = "Keuangan";
    myData[1].golongan = "3B";
    
    myData[2].nik = "003";
    myData[2].nama = "Adu";
    myData[2].bagian = "Personalia";
    myData[2].golongan = "4A";
    
    tabel(myData);

    return 0;
}

void tabel(dataUser myData[]){
    cout << setw(10) << left << "NIK";
    cout << setw(10) << left << "Nama";
    cout << setw(10) << left << "Bagian";
    cout << setw(10) << right << "Golongan" << endl;
    cout << "----------------------------------------" << endl;

    for (int i = 0; i < 3; i++){
        cout << setw(10) << left << myData[i].nik;
        cout << setw(10) << left << myData[i].nama;
        cout << setw(10) << left << myData[i].bagian;
        cout << setw(10) << right << myData[i].golongan;
        cout << endl;
    }

    cout << "----------------------------------------" << endl;
}