// Program untuk mengonversi Fahrenheit ke Celsius
#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel
    float fahren, celsius;
    
    // Input
    cout << "Nilai derajat Fahrenheit: ";
    cin >> fahren;
    
    // Hitung
    celsius = (fahren - 32) * 5 / 9;
    
    // Output
    cout << "Identik dengan " << celsius << " derajat Celsius" << endl;
    
    return 0;
}