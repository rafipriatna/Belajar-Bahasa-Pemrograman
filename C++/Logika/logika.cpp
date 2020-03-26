#include <iostream>

/*
    Nama    : Rafi Priatna K
    NPM     : 15118760
    Kelas   : 2KA31
*/

using namespace std;

// Program Keenam C++ Rafi

int main(){
    int a = 5;
    int b = 5;

   // Logika NOT
   if (!(a == 4)){
       // Jika a bukan 4
       cout << "Nilai A itu 5 bukan 4" << endl;
   }

   // Logika OR
   if (a == 5 || b == 4){
       // Jika a itu 5 atau b itu 4
       cout << "A itu 5 atau B itu 4" << endl;
   }

   // Logika AND
   if (a == 5 && b == 5){
       // Jika a itu 5 dan b itu 5
       cout << "A itu 5 dan B itu 5" << endl;
   }

    return 0;
}