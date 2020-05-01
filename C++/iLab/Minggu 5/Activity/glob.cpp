#include <iostream>

using namespace std;

int oblada = 550;

void tambah();

int main(){
    cout << oblada << endl;
    tambah();
    cout << oblada << endl;
    tambah();
    cout << oblada << endl;
    return 0;
}

void tambah(){
    oblada++;
}