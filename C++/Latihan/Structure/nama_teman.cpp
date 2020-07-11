// Contoh

#include <iostream>
#include <cstring>

using namespace std;

int main()
    {
        struct nama_teman
    {
    char nomhs[30];
    char nama[30];
    int umur;
    float ipk;
    };
    struct nama_teman temanku;
    strcpy(temanku.nomhs,"005");
    strcpy(temanku.nama,"ista");
    temanku.umur=20;
    temanku.ipk=2.54;
    strcpy(temanku.nomhs,"006");
    strcpy(temanku.nama,"ista2");
    temanku.umur=19;
    temanku.ipk=3.14;
    cout <<temanku.nomhs <<" ";
    cout <<temanku.nama<<" ";
    cout <<temanku.umur <<" ";
    cout <<temanku.ipk <<endl;
}