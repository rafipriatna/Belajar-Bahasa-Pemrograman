#include <iostream>

using namespace std;

int main(){
    // Deklarasi array
    int jum_hari[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    // Looping isi array
    for (int i = 0; i < 12; i++){
        cout << "jum_hari[" << i << "] = ";
        cout << jum_hari[i] << endl;
    }

    return 0;
}