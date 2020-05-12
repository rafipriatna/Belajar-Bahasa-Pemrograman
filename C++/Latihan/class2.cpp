#include <iostream>

using namespace std;

class Mahasiswa {
    public:
        string nama, npm, kelas;
};

int main(){
    Mahasiswa me;

    // Pengisian Kelas
    me.nama     = "Rafi Priatna";
    me.npm      = "15118760";
    me.kelas    = "2KA31";

    // Output
    cout << "Halo, nama saya " << me.nama << " dengan NPM " << me.npm;
    cout << " saya berada di kelas " << me.kelas << endl;
    return 0;
}