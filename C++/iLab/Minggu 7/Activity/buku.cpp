#include <iostream>

using namespace std;

class Buku{
    private:
        string judul, pengarang;
        int jumlah;

    public:
        void inisialisasi(
            string arg_judul,
            string arg_pengarang,
            int arg_jumlah){
                judul       = arg_judul;
                pengarang   = arg_pengarang;
                jumlah      = arg_jumlah;
        }

        void info(){
            cout << "Judul      : " << judul << endl;
            cout << "Pengarang  : " << pengarang << endl;
            cout << "Jumlah     : " << jumlah << endl;
        }
};

int main(){
    Buku novel, fiksi;

    novel.inisialisasi(
        "Meriam Benteng Navarone",
        "Alistair MacLean",
        12
    );
    
    fiksi.inisialisasi(
        "Jurassic Park",
        "Michael Crichton",
        3
    );

    novel.info();
    fiksi.info();

    return 0;
}