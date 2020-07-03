#include <iostream>

using namespace std;

int main() {
    int a[2][3];
    int nomor = 0;

    cout << "Masukkan 6 data : " << endl;
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j <= 2; j++){
            cout << "Data ke-" << nomor + 1 << " : ";
            cin >> a[i][j];
            nomor += 1;
        }
    }

    cout << endl;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j <= 2; j++){
            cout << "a[" << i << "," << j << "] = " << a[i][j] << endl;
        }
    }

    return 0;
}
