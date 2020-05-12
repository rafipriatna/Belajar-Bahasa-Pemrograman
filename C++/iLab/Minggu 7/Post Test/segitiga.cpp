#include <iostream>
using namespace std;

class Segitiga{
    int alas,tinggi;
    
    public:        
        float luas(){
            return(alas * tinggi * 0.5);
        }

        void set_values(int a, int t){
            alas = a;
            tinggi = t;
        }
};

// Penghitungan luas segitiga
int main(){
    Segitiga Segitiga1;
    Segitiga Segitiga2;
    Segitiga1.set_values(7,6);
    Segitiga2.set_values(3,7);
    
    cout << "Luas Segitiga 1 adalah " << Segitiga1.luas() << endl;
    cout << "Luas Segitiga 2 adalah " << Segitiga2.luas() << endl;

    return 0;
}
