#include <iostream>

using namespace std;

void lokal();

int main(void){
    int a = 25;

    cout << "Nilai a dalam fungsi main = " << a;
    lokal();
    cout << "\nNilai a dalam fungsi main = " << a;
}

void lokal() {
    int a = 70;
    cout << "\nNilai a dalam fungsi lokal = " << a;
}