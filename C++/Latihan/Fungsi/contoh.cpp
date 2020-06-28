#include <iostream>
#include <math.h>

using namespace std;

void pers(int x);

int main(){
    int b = 5;
    cout << "Nilai b = " << b << endl;
    pers(b);
    cout << "Nilai b = " << b << endl;
    return 0;
}

void pers(int x){
    int y,b=10;
    cout << "Nilai b = " << b << endl;
    y=pow(x,2)+6*x+8;
    cout <<"hasil y = " <<y <<endl;
    return;
}