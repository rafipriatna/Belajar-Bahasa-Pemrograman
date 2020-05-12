#include <iostream>
#include <cmath>

using namespace std;

class Kubus {
    public:
        int sisi;
};

int main(){
    Kubus kubus;

    // Pengisian Kelas
    cout << "Masukkan sisi kubus : ";
    cin >> kubus.sisi;

    // Output
    cout << "Volume kubus adalah" << endl;
    cout << kubus.sisi << " x " << kubus.sisi << " x " << kubus.sisi << " = ";
    cout << pow(kubus.sisi, 3) << endl; 
    return 0;
}