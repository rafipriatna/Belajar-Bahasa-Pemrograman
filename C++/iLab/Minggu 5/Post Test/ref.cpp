#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel dan referensi
    int x = 55;
    int r = x;

    // Perubahan nilai variabel x
    x = 10;
    r = x;
    cout << "x = " << x << endl;
    cout << "r = " << r << endl;

    // Perubahan nilai pada variabel r
    r = 55;
    x = r;
    cout << "x = " << x << endl;
    cout << "r = " << r << endl;

    return 0;
}