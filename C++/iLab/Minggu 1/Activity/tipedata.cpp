// Program pembacaan data bertipe int dan float
#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel
    int bil_x;
    float bil_y;
    
    // Input
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bil_x;
    
    cout << "Masukkan sebuah bilangan pecahan: ";
    cin >> bil_y;
    
    // Output
    cout << "Bilangan bulat = " << bil_x << endl;
    cout << "Bilangan pecahan = " << bil_y << endl;
    
    return 0;
}