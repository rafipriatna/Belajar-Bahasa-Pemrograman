#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel
    int fakultas;

    // Pilihan menu
    cout << "Fakultas:\n 1. Hukum\n 2. Pendidikan\n 3. Ilmu Kesehatan\n 4. Teknik\n";
    // Input
    cout << "Masukkan fakultas Anda: ";
    cin >> fakultas;

    // Pengkondisian
    switch(fakultas){
        // Hukum
        case 1:
            cout << "Program Studi:\n 1. Ilmu Hukum S1\n";
            break;
        
        // Pendidikan
        case 2:
            cout << "Program Studi:\n 1. Bimbingan Konseling (S-1) \n 2. Pendidikan Guru PAUD (S-1)\n 3. Pendidikan Guru SD (S-1)\n";
            break;
        
        // Ilmu Kesehatan
        case 3:
            cout << "Program Studi:\n 1. Ilmu Keperawatan (S-1)\n 2. Keperawatan (D-3)\n 3. Farmasi (D-3)\n 4. Profesi Ners\n";
            break;

        // Teknik
        case 4:
            cout << "Program Studi:\n 1. Teknik Industri (S-1)\n 2. Teknik Informatika (S-1)\n";
            break;

        // Selain 1 - 4
        default:
            cout << "Fakultas yang Anda masukkan salah";

    }

    return 0;
}