#include <iostream>
#include <string>

using namespace std;

int main(){
     //[1] deklarasi variabel contact dengan tipe data string array
    string contact[5] = {"Ami", "Ayu", "Budi", "Agus", "Mila"};

    //[2]  mengambil banyaknya isi array contact dan memasukkan nilai ke variabel length bertipe data integer
    int length = sizeof(contact) / sizeof(*contact);

    cout << "Banyaknya isi array nilai: "<< length << "\n";

    return 0;
}
