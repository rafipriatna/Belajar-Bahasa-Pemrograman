// Rafi Priatna
// Arkan Amir
// Megantara
// Fikri Eka S
#include <stdio.h>

void main(){

    // For
    puts("Looping For");
    int f;
    for (f = 1; f <= 20; f++){
        if ( f % 2 != 0){
            printf("%i ", f);
        }
    }

    printf("\n");

    // While
    puts("Looping While");
    int w;
    w = 1;
    while (w <= 20){
        if ( w % 2 != 0){
            printf("%i ", w);
        }
        w++;
    }

    printf("\n");

    // Do While
    puts("Looping Do While");
    int d;
    d = 1;
    do {
        if ( d % 2 != 0){
            printf("%i ", d);
        }
        d++;
    }
    while (d <= 20);
}
