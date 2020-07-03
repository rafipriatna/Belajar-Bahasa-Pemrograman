#include <iostream>

using namespace std;

int main() {
    int a[5];

    cout << "Masukkan 5 data : " << endl;
    
    for (int i = 0; i < 5; i++){
        cout << "Data ke-" << i + 1 << " : ";
        cin >> a[i];
    }

    cout << endl;

    for (int i = 0; i < 5; i++){
        cout <<"isi a[" << i << "] = " <<a[i]<<endl;
    }

    return 0;
}
