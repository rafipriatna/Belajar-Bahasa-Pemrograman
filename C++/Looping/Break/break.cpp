#include <iostream>

using namespace std;

int main(){

    for (int i = 0; i <= 10; i++){
        if (i == 5){
            // Lanjutkan looping
            // Tapi looping ke 5  diskip
            continue;
        }
        cout << i << endl;
    }

    cout << "\n \n";

    for (int i = 0; i <= 10; i++){
        if (i == 5){
            // Berhenti looping
            break;
        }
        cout << i << endl;
    }
    
    return 0;
}