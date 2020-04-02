#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    int a = 5;
    int b = 5;
    int c = 5;
    int d = 5;

    // Postincrement
    cout << "Postincrement" << endl;
    cout << a++ << endl;

    // Preincrement
    cout << "Preincrement" << endl;
    cout << ++b << endl;

    // Postdecrement
    cout << "Postdecrement" << endl;
    cout << c-- << endl;

    // Predecrement
    cout << "Predecrement" << endl;
    cout << --d << endl;

    return 0;
}