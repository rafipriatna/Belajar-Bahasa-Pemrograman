#include <iostream>
#define max 2

using namespace std;

int **pemasukanData();
void sortingData(int **a);

int main() {
    int **a = pemasukanData();

    cout << endl;

    sortingData(a);

    return 0;
}

int **pemasukanData() {
    int **a = new int*[max];
    int nomor = 0;
    cout << "Masukkan 6 data : " << endl;
    
    for (int i = 0; i < max; i++){
        a[i] = new int(max);
        for (int j = 0; j <= max; j++){
            cout << "Data ke-" << nomor + 1 << " : ";
            cin >> a[i][j];
            nomor += 1;
        }
    }

    return a;
}

void sortingData(int **a){
    for (int i = 0; i < max; i++){
        for (int j = 0; j <= max; j++){
            cout << "a[" << i << "," << j << "] = " << a[i][j] << endl;
        }
    }
}
