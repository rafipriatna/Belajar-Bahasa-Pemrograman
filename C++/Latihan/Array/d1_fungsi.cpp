#include <iostream>
#define max 5

using namespace std;

int *pemasukanData();
void sortingData(int *a);

int main() {
    int *a = pemasukanData();

    cout << endl;

    sortingData(a);

    return 0;
}

int *pemasukanData(){
    static int a[max];
    cout << "Masukkan " << max << " data : " << endl;
    for (int i = 0; i < max; i++){
        cout << "Data ke-" << i + 1 << " : ";
        cin >> a[i];
    }
    return a;
}

void sortingData(int *a){
    for (int i = 0; i < max; i++){
        cout <<"isi a[" << i << "] = " <<a[i]<<endl;
    }
}
