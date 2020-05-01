#include <iostream>

using namespace std;

int main(){
    // Deklarasi variabel jum_bantuan dan jum_orang bertipe integer
    int jum_bantuan;
    int jum_orang;

    try{
        // masukan dari user jumlah bantuan
        cout << "Menghitung pembagian bantuan" << endl;
        cout << "Jumlah bantuan: ";
        cin >> jum_bantuan;

        if (jum_bantuan < 0){
            throw string("Bantuan negatif");
        }else{
            // masukan dari user jumlah orang
            cout << "Jumlah orang: ";
            cin >> jum_orang;

            if (jum_orang == 0){
                throw string("Pembagian dengan nol");
            }else if(jum_orang < 0){
                throw string("Jumlah orang negatif");
            }else{
                 //[2] menghitung hasil pembagian ke variabel hasil_pembagian bertipe integer
                int hasil_pembagian = jum_bantuan / jum_orang;
                cout << "Hasil pembagian = " << hasil_pembagian << endl;
            }
        }
    }catch(string e){
        cout << e << endl;
    }

    cout << "Selesai..." << endl;

    return 0;
}