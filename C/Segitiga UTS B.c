/*
UTS Kode : B

Membuat segitiga dengan looping for seperti ini :

25
25 16
25 16 9
25 16 9 4
25 16 9 4 1

*/

#include <stdio.h>

void main(){
    // Deklarasi variabel
    int a, b;
    for(a = 5; a >= 1; a--){
        for(b = 5; b >= a; b--){
            printf("%i ", b*b);
        }
        printf("\n");
    }
}
