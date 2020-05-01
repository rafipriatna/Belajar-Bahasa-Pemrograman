#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    int bil;

    // Input
    cout << "Masukkan bilangan: ";
    cin >> bil;

    // Pengkondisian
    if (bil == 8){
        cout << bil << " adalah bilangan prima" << endl;
    }else{
        cout << bil << " bukan bilangan prima" << endl;
    }

    return 0;
}