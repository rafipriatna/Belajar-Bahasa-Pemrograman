/*
 * -------------------------------------
 * Contoh pewarisan yang melibatkan
 * konstruktur dan detruktor
 * -------------------------------------
 */

#include <iostream>

using namespace std;

class Kendaraan{
    private:
        string nama;

    public:
        Kendaraan(string nama){
            Kendaraan::nama = nama;
            cout << "Hidupkan mesin kendaraan..." << endl;
        }

        ~Kendaraan(){
            cout << "Matikan mesin kendaraan..." << endl;
        }

        void info(){
            cout << nama << " sedang berjalan..." << endl;
        }
};

class Truk : public Kendaraan{
    public:
        Truk(string nama) : Kendaraan(nama){
            cout << "Hidupkan mesin truk " << nama << endl;
        }

        ~Truk(){
            cout << "Matikan mesin truk..." << endl;
        }
};

int main(){
    Truk fuso("FUSO");
    fuso.info();

    cout << "Akhir main()..." << endl;

    return 0;
}