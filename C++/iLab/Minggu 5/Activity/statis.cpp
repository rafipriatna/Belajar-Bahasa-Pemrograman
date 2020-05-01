#include <iostream>

using namespace std;

void saya_ingat();

int main(){
    int mamamia = 55;

    cout << "di main(): mamamia = " << mamamia << endl;

    saya_ingat();
    saya_ingat();
    saya_ingat();
    saya_ingat();

    cout << "di main(): mamamia = " << mamamia << endl;
    return 0;
}

void saya_ingat(){
    static int mamamia = 0;
    mamamia++;
    cout << "di bravo(): mamamia = " << mamamia << endl;
}