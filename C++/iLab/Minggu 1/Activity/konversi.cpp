// Konversi pada penugasan ke variabel
#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel
    char c;
    int i;
    float x;
    
    // Isi variabel
    x = 176.5;
    i = x;
    c = i;
    
    // Output
    cout << "Isi x = " << x << endl;
    cout << "Isi i = " << i << endl;
    cout << "Isi c = " << c << endl;
    
    return 0;
}