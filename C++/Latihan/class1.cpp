#include <iostream>

using namespace std;

class Smartphone{
    public:
        string merk, jenis, sistem_operasi, prosesor, ram, penyimpanan;
};

int main(){
    Smartphone hp;

    // Pengisian kelas
    hp.merk = "Xiaomi";
    hp.jenis = "Redmi 7";
    hp.sistem_operasi = "Android 10";
    hp.prosesor = "Snapdragon 632";
    hp.ram = "2";
    hp.penyimpanan = "16";

    // Output
    cout << "Merk           : " << hp.merk << endl;
    cout << "Jenis          : " << hp.jenis << endl;
    cout << "Sistem operasi : " << hp.sistem_operasi << endl;
    cout << "Prosesor       : " << hp.prosesor << endl;
    cout << "RAM            : " << hp.ram << " GB" << endl;
    cout << "Penyimpanan    : " << hp.penyimpanan << " GB" << endl;
    return 0;
}