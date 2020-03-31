#include <iostream>

using namespace std;

int main(){

    // for(inisialisasi; kondisi; increment/decrement)

    cout << "Pertama \n";
    for(int i = 1; i <= 10; i++){
        cout << "Loop ke-" << i << endl;
    }

    cout << endl;
    
    cout << "Kedua \n";
    for(int i = 1; i <= 10; i += 2){
        cout << "Loop ke-" << i << endl;
    }

    cout << endl;
    
    cout << "Ketiga \n";
    for(int i = 1; i >= -10; i--){
        cout << "Loop ke-" << i << endl;
    }

    cout << endl;
    // compound
    cout << "Keempat \n";
    int total = 0;
    for(int i = 1; i <= 10; i++, total += i){
        cout << "Loop ke-" << i << " || " << total << endl;
    }

    return 0;
}