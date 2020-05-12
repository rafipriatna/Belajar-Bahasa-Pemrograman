#include <iostream>

using namespace std;

class PersegiPanjang{
    private:
        int panjang, lebar;

    public:
        void ukuran(int,int);
        int rumus(){
            return panjang * lebar;
        }
};

void PersegiPanjang::ukuran(int x, int y){
    panjang = x;
    lebar   = y;
}

int main(){
    PersegiPanjang luas;
    luas.ukuran(8, 6);
    cout << "luas persegi panjang: " << luas.rumus() << endl;
    return 0;
}