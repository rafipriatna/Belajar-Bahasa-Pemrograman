#include <iostream>
#include <stdlib.h>
#include <curses.h>
#include <cstring>

using namespace std;

char *strrev(char *str){
    // Fungsi membalikkan string
    // Karena di Linux tidak ada strrev
    char *p1, *p2;

    if (! str || ! *str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2){
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

int main(){
    char kata[100],i,b[]="_________________________________________";
    move(15,6);cout << "PROGRAM UNTUK MEMBALIK URUTAN KARAKTER"
    << endl;
    move(22,7);cout << "DALAM SUATU KALIMAT" << endl;
    move(15,8);cout << b << endl;
    move(20,10);cout << "Masukan sebuah kalimat : "<< endl;
    move(20,12);cin.get(kata,100);
    system("clear");
    move(20,9);cout << b << endl;
    move(20,11);cout << "kalimat Sebelum dibalik " << endl;
    move(25,13);cout <<'"' << (kata) << '"' << endl;
    move(20,15);cout << "Kalimat setelah dibalik ";
    move(25,17);cout << '"' << strrev(kata) << '"'<<endl;
    move(20,19);cout << b << endl;
    return 0 ;
}