#include <iostream>
#include <string>

using namespace std;

/*
 * Program ganjil genap
 * dan tanda bilangan positif / negatif
 */

int main(){
    // Deklarasi variabel
    int angka;
    string tanda_bilangan, paritas;

    // Input angka oleh user
    cout << "Silakan masukkan angka : ";
    cin >> angka;

     
    // Pengkondisian tanda bilangan positif / negatif
    if (angka > 0){
        // Positif
        tanda_bilangan = "Positif";  
    }else if (angka == 0){
        // Nol
        tanda_bilangan = "Nol"; 
    }else{
        // Negatif
        tanda_bilangan = "Negatif";  
        // Ubah bilangan ke positif supaya bisa dicek genap / ganjil
        angka *= -1;
    }

    // Pengkondisian genap / ganjil
    if (angka % 2 == 0){
        // Jika angka modulus 2 == 0, berarti genap
        paritas = "Genap";
    }else{
        // Jika angka modulus 2 != 0, berarti ganjil
        paritas = "Ganjil";
    }

    // Output
    cout << "\nTanda Bilangan = " << tanda_bilangan << endl;
    cout << "Ganjil/Genap = " << paritas << endl;

    return 0;
}