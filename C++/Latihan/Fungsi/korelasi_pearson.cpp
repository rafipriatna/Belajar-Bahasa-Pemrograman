#include <iostream>
#include <math.h>
#include <iomanip>

#define max 100

using namespace std;

// Struct
// Data koefesien
struct dataKoefesien {
    int x, y, x2, y2, xy;
};

// Data sigma
struct dataSigma {
    // Deklarasi variabel + pemberian nila awal = 0
    int x = 0, y = 0, x2 = 0, y2 = 0, xy = 0;
};

// Deklarasi fungsi
void judul();
int cariRataRata(int jumlahData, int banyakData);
void cariKorelasi(int banyakData, dataSigma isiSigma);
void tabel(dataKoefesien nilaiKoefesien[],
    dataSigma isiSigma, int banyakData,
    int rataRataX, int rataRataY);

int main(){
    // Deklarasi Variabel dan struct
    struct dataKoefesien nilaiKoefesien[max];
    struct dataSigma isiSigma;
    int banyakData;
    int rataRataX, rataRataY;

    // Nilai awal
    rataRataX = 0;
    rataRataY = 0;

    judul();

    // Input
    cout << "Masukkan banyaknya data (max " << max << "): ";
    cin >> banyakData;

    // Looping memasukkan data sesuai dengan total banyaknya data
    for (int i = 0; i < banyakData; i++){
        cout << "Masukkan data ke-" << i + 1 << " : " << endl;

        // Input X dan hitung sigma X
        cout << "Masukkan nilai x : ";
        cin >> nilaiKoefesien[i].x;
        isiSigma.x += nilaiKoefesien[i].x;
        
        // Input Y dan hitung sigma Y
        cout << "Masukkan nilai y : ";
        cin >> nilaiKoefesien[i].y;
        isiSigma.y += nilaiKoefesien[i].y;

        // Hitung X2, Y2, dan hitung sigma X2, sigma Y2
        nilaiKoefesien[i].x2 = pow(nilaiKoefesien[i].x, 2);
        nilaiKoefesien[i].y2 = pow(nilaiKoefesien[i].y, 2);
        isiSigma.x2 += nilaiKoefesien[i].x2;
        isiSigma.y2 += nilaiKoefesien[i].y2;

        // Hitung XY dan hitung sigma XY
        nilaiKoefesien[i].xy = nilaiKoefesien[i].x * nilaiKoefesien[i].y;
        isiSigma.xy += nilaiKoefesien[i].xy;

        cout << endl;
    }
    
    // Perhitungan
    // Cari rata-rata
    rataRataX = cariRataRata(isiSigma.x, banyakData);
    rataRataY = cariRataRata(isiSigma.y, banyakData);

    // Bersihkan layar
    system("clear");

    // Output
    judul();
    // Kirim data ke tabel
    tabel(nilaiKoefesien, isiSigma, banyakData, rataRataX, rataRataY);

    cout << endl;

    // Hitung korelasi pearson
    cariKorelasi(banyakData, isiSigma);
    
    return 0;
}

// Fungsi
// Judul
void judul(){
    cout << "================= Korelasi Pearson =================" << endl;
    cout << endl;
}

// Mencari rata-rata
int cariRataRata(int jumlahData, int banyakData){
    return jumlahData / banyakData;
}

// Mencari korelasi
void cariKorelasi(int banyakData, dataSigma isiSigma){
    /*
     * Rumus Korelasi Pearson
     * 
     * n x sigma XY - (sigma X)(sigma Y) <= saya sebut bagian atas
     * dibagi dengan
     * akar(n x sigma x^2 - (sigma x)^2) x akar(n x sigma y^2 - (sigma y)^2)
     *                 ^                                   ^
     *             Bawah Satu                          Bawah Dua
     * 
     */

    // Hitung
    float hitungAtas = banyakData * isiSigma.xy - ((isiSigma.x) * (isiSigma.y));
    float hitungBawahSatu = sqrt(banyakData * isiSigma.x2 - pow(isiSigma.x, 2));
    float hitungBawahDua = sqrt(banyakData * isiSigma.y2 - pow(isiSigma.y, 2));
    float hitungKorelasi = hitungAtas / (hitungBawahSatu * hitungBawahDua);

    cout << "Korelasi Pearson = " << hitungKorelasi;
    cout << " ≈ " << roundf(hitungKorelasi * 1000) / 1000 << endl;
}

// Membuat tabel
void tabel(dataKoefesien nilaiKoefesien[],
    dataSigma isiSigma, int banyakData,
    int rataRataX, int rataRataY){
        
    cout << setw(10) << left << "No";
    cout << setw(10) << left << "X";
    cout << setw(10) << left << "Y";
    cout << setw(10) << left << "X^2";
    cout << setw(10) << left << "Y^2";
    cout << setw(10) << left << "XY";
    cout << endl;
    cout << "_____________________________________________________" << endl;
    cout << endl;

    for (int i = 0; i < banyakData; i++){
        cout << setw(10) << left << i + 1;
        cout << setw(10) << left << nilaiKoefesien[i].x;
        cout << setw(10) << left << nilaiKoefesien[i].y;
        cout << setw(10) << left << nilaiKoefesien[i].x2;
        cout << setw(10) << left << nilaiKoefesien[i].y2;
        cout << setw(10) << left << nilaiKoefesien[i].xy;
        cout << endl;
    }

    cout << "_____________________________________________________" << endl;
    cout << setw(10) << left << "Jumlah :";
    cout << setw(10) << left << isiSigma.x;
    cout << setw(10) << left << isiSigma.y;
    cout << setw(10) << left << isiSigma.x2;
    cout << setw(10) << left << isiSigma.y2;
    cout << setw(10) << left << isiSigma.xy;
    cout << endl;

    cout << setw(10) << left << "Rata2  :";
    cout << setw(10) << left << rataRataX;
    cout << setw(10) << left << rataRataY;
    cout << endl;
}