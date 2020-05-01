#include <iostream>

using namespace std;

void tukar(int a, int b);

int main(){
    // Deklarasi variabel
    int a, b;
    a = 55;
    b = 77;

    cout << "main() : a = " << a << ", b = " << b << endl;

    // Pemanggilan fungsi tukar
    tukar(a, b);

    cout << "main() : a = " << a << ", b = " << b << endl;
    

    return 0;
}

void tukar(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    cout << "tukar(): a = " << a << ", b = " << b << endl;
}