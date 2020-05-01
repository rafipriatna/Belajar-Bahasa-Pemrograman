#include <iostream>
#include <string>

using namespace std;

int main(){
    // Deklarasi variabel
    string password;

    // Input
    cout << "Masukkan password: ";
    cin >> password;

    // Pengkondisian
    if (password == "gunadarma"){
        cout << "Selamat datang!" << endl;
    }else{
        cout << "Password salah, coba lagi!" << endl;
    }

    cout << "Terima kasih sudah menggunakan aplikasi ini!" << endl;

    return 0;
}