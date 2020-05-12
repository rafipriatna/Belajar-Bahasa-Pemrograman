#include <iostream>

using namespace std;

class PersegiPanjang{
    int panjang, lebar;
    public:
        int luas(){
            return (panjang * lebar);
        }

        void set_values(int x, int y){
            panjang = x;
            lebar   = y;

        }
};

class Segitiga{
    int alas, tinggi;
    public:
        float luas(){
            return (alas * tinggi * 0.5);
        }
        void set_values(int a, int t){
            alas = a;
            tinggi = t;
        }
};

int main(){
    PersegiPanjang Kotak1;
    PersegiPanjang Kotak2;

    Segitiga Segitiga1;
    Segitiga Segitiga2;

    Kotak1.set_values(10, 10);
    Kotak2.set_values(5, 5);

    Segitiga1.set_values(7, 6);
    Segitiga2.set_values(3,7);

    cout << "Luas Kotak 1 adalah " << Kotak1.luas() << endl;
    cout << "Luas Kotak 2 adalah " << Kotak2.luas() << endl;
    cout << "Luas Segitiga 1 adalah " << Segitiga1.luas() << endl;
    cout << "Luas Segitiga 2 adalah " << Segitiga2.luas() << endl;

    return 0;
}