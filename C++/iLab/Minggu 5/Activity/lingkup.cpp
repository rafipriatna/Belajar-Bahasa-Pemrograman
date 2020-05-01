#include <iostream>

using namespace std;

int whoami = 50;

int main(){
    float whoami = 123.456789;

    cout << "whoami lokal : " << whoami << endl;
    cout << "whoami global: " << ::whoami << endl;

    whoami++;
    ::whoami++;

    cout << "whoami lokal : " << whoami << endl;
    cout << "whoami global: " << ::whoami << endl;

    return 0;
}