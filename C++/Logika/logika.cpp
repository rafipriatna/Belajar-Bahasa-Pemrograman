#include <iostream>

using namespace std;

int main(){
    int a = 2;
    int b = 6;

    bool hasil;

    // Operator NOT
    cout << "Operator NOT : \n";
    hasil = !(a == b);
    cout << hasil << endl;

    cout << endl;

    // Operator AND
    cout << "Operator AND : \n";
    hasil = (a == 2) && (b == 6); // Benar dan Benar
    cout << hasil << endl;
    hasil = (a == 2) && (b == 5); // Benar dan Salah
    cout << hasil << endl;
    hasil = (a == 1) and (b == 5); // Salah dan Salah
    cout << hasil << endl;
    hasil = (a == 1) and (b == 6); // Salah dan Benar
    cout << hasil << endl;

    cout << endl;

    // Operator OR
    cout << "Operator OR : \n";
    hasil = (a == 2) || (b == 6); // Benar dan Benar
    cout << hasil << endl;
    hasil = (a == 2) || (b == 5); // Benar dan Salah
    cout << hasil << endl;
    hasil = (a == 1) or (b == 5); // Salah dan Salah
    cout << hasil << endl;
    hasil = (a == 1) or (b == 6); // Salah dan Benar
    cout << hasil << endl;

    return 0;
}