#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    char grade;

    // Input
    cout << "Inputkan grade: ";
    cin >> grade;

    // Pengkondisian switch
    switch (grade){
        case 'A':
            cout << "Luar biasa!" << endl;
            break;
        case 'B':
            cout << "Bagus!" << endl;
            break;
        case 'C':
            cout << "Anda lulus" << endl;
            break;
        case 'D':
            cout << "Anda remidi" << endl;
            break;
        case 'E':
            cout << "Anda remidi" << endl;
            break;
        case 'F':
            cout << "Anda remidi" << endl;
            break;
        default:
            cout << "Grade Salah!" << endl;
    }

    return 0;
}