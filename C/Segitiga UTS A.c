/*
UTS Kode : A

Membuat segitiga dengan looping for seperti ini :

1
1 4
1 4 9 16
1 4 9 16 25

*/

#include <stdio.h>

void main(){
    // Deklarasi variabel
    int a, b;
    for(a = 1; a <= 5; a++){
        for(b = 1; b <= a; b++){
            printf("%i ", b*b);
        }
        printf("\n");
    }
}
