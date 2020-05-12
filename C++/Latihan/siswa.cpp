#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <curses.h>
#include <cstring>
#include <string>

using namespace std;

int main() {
    char nama[25] [50], nilai_ujian[10],ket[25][15];
    char
    b[]="____________________________________________________________";
    float jumlah=0,nilai[25],rata;
    int siswa, i=0,a=5,p=1 ;

    move(20,2);
    cout << "PROGRAM UNTUK MENGINPUT NILAI UJIAN " <<endl;
    move(15,3);cout << "_____________________________________________" <<endl;
    move(15,a);
    cout <<p<<"."<< " Nama Siswa ( X = Selesai) : ";
    fgets(nama[i], sizeof(nama[i]), stdin);
    while(nama[i][0] != 'X'){
        a++;
        move(18,a);
        cout << "Nilai Ujian (10 - 100 ) : ";
        cin >> nilai_ujian;
        cin.ignore();
        nilai[i]=atof(nilai_ujian);
        if (nilai[i] <60 ) strcpy(ket[i],"TIDAK LULUS");
        else strcpy(ket[i],"LULUS");
        i+=1;a++;p++;
        move(15,a);
        cout <<p<<"."<< " Nama Siswa ( X = Selesai) : " ;
        fgets(nama[i], sizeof(nama[i]), stdin);
    }

    siswa=i;
    for (i=0 ; i<siswa ; i++)
    jumlah+=nilai[i];
    rata=jumlah/siswa;
    system("clear");
    move(25,5);cout << "DAFTAR NILAI UJIAN SISWA"<< endl;
    move(7,6);cout << b << endl ;
    move(8,7);cout << "NO.";
    move(12,7);cout << "NAMA SISWA" ;
    move(40,7);cout << "NILAI" ;
    move(55,7);cout << "KETERANGAN"<< endl;
    move(7,8);cout << b << endl ;
    int m=9,n=1 ;
    for (i=0 ; i<siswa ; i++)
    {
    move(8,m);cout << n <<".";
    move(12,m);cout << nama[i];
    move(41,m);cout << nilai[i];
    move(55,m);cout <<ket[i];
    m++ ;
    n++ ;
    }
    move(7,m);cout << b << endl ;
    move(15,m+1);cout << "Nilai Rata-Rata = " <<
    rata << endl;
    cin.get();
    return 0;
}