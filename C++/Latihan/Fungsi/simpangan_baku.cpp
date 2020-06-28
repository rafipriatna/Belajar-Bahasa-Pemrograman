#include <iostream>
#include <math.h>

using namespace std;

// Deklarasi fungsi
int cariRataRata(int jumlahData, int banyakData);
float cariRagam(int isiData[], int banyakData, int hasilRataRata);
float cariSimpanganBaku(float ragam);

int main(){
    // Deklarasi variabel
    int banyakData, jumlahData = 0, hasilRataRata;
    float hasilRagam;
    int isiData [100];

    // Input
    cout << "Masukkan banyaknya data (max 100): ";
    cin >> banyakData;

    // Looping memasukkan data sesuai dengan total banyaknya data
    for (int i = 0; i < banyakData; i++){
        cout << "Masukkan data ke-" << i + 1 << " : ";
        cin >> isiData[i];
        jumlahData += isiData[i];
    }

    // Output
    // Cari rata-rata
    hasilRataRata = cariRataRata(jumlahData, banyakData);
    cout << "Rata-rata : " << hasilRataRata << endl;

    // Cari ragam
    hasilRagam = cariRagam(isiData, banyakData, hasilRataRata);
    cout << "Ragam : " << hasilRagam << endl;

    // Cari Simpangan baku
    cout << "Simpangan baku = " << cariSimpanganBaku(hasilRagam) << endl;

    return 0;
}

// Fungsi
// Mencari rata-rata
int cariRataRata(int jumlahData, int banyakData){
    return jumlahData / banyakData;
}

// Mencari ragam
float cariRagam(int isiData[], int banyakData, int hasilRataRata){
    float ragam = 0;
    for (int i = 0; i < banyakData; i++){
        ragam += pow((isiData[i] - hasilRataRata), 2);
    }
    ragam = ragam / banyakData;
    return roundf(ragam * 1000) / 1000;
}

// Mencari simpangan baku
float cariSimpanganBaku(float ragam){
    return sqrt(ragam);
}