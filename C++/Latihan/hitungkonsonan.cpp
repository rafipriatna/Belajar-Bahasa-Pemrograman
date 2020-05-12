#include <iostream>
#include <stdlib.h>
#include <curses.h>
#include <cstring>

/*
 * Nama     : Rafi Priatna K
 * NPM      : 15118760
 * Kelas    : 2KA31
 */

using namespace std;

int main(){
    static char huruf[10] =
    {'A','I','U','E','O','a','i','u','e','o'} ;
    char *ptrkar ;
    char kar,nama[20];
    char grs[]=" ______________________";
    int i,pjg,vokal,konsonan;
    move(10,4);cout <<grs << endl;
    move(15,3);cout << "PROGRAM UNTUK MENGHITUNG HURUF VOKAL & KONSONAN" << endl;
    move(10,8);cout <<grs << endl;
    move(20,6);cout << "MASUKKAN SEBUAH KATA :";
    cin >> nama;
    system("clear");
    pjg = strlen(nama);
    vokal = 0,konsonan = 0 ;

    for (i=0 ; i<pjg;i++){
        kar = nama[i];
        ptrkar = strchr(huruf,kar);
        if (ptrkar !=0){
            vokal = vokal + 1;
        }else{
            konsonan = konsonan +1 ;
        }
    }
    move(10,5);cout<< grs << endl;
    move(15,7);cout<< "KATA " <<"' "<<
    nama<<" '" << " Terdiri dari :";
    move(20,9);cout<< vokal << " Huruf Vokal " ;
    move(20,10);cout<< konsonan << "Huruf Konsonan" << endl;
    move(10,12);cout<< grs ;
    return 0 ;
}