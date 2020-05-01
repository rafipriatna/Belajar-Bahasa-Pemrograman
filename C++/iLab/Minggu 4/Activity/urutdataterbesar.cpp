#include <iostream>

using namespace std;

// Deklarasi function
void tampilkan_data(int data[], int jum_data);

int main(){
    // Deklarasi variabel array
    int data[] = {
        5, 100, 20, 31, 77, 88, 99, 20, 55 , 1
    };
    // Inisialisasi jumlah array
    int jum_data = sizeof(data) / sizeof(int);

    // Output
    cout << "Data semula: " << endl;
    tampilkan_data(data, jum_data);

    // Looping untuk diurutkan
    for (int i = 0; i < jum_data - 1; i++){
        for (int j = i; j < jum_data; j++){
            if (data[i] < data[j]){
                // Jika data ke i lebih kecil dari data ke j
                // Tukarkan
                int tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
    
    // Output hasil pengurutan
    cout << "Data hasil pengurutan: " << endl;
    tampilkan_data(data, jum_data);

    return 0;
}

// Function
void tampilkan_data(int data[], int jum_data){
    for (int i = 0; i < jum_data; i++){
        cout << data[i] << " ";
    }
    cout << endl;
}