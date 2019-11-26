/*
    Membuat bilangan ganjil dengan 3 looping.
    Hint :  Gunakan bilangan yang tidak habis dibagi 2.
            Kita bisa menggunakan modulus.
*/
#include <stdio.h>

void main(){

    // Loop For
    puts("Looping For");
    int f;
    // f = 1, tiap loop f + 1 hingga nilai f < = 20.
    for (f = 1; f <= 20; f++){
        // Jika f Modulus 2 hasilnya tidak sama dengan 0
        // Maka print f
        if ( f % 2 != 0){
            printf("%i ", f);
        }
    }

    printf("\n");

    // Loop While
    puts("Looping While");
    int w;
    w = 1;
    // Jika nilai w < = 20, maka lakukan looping
    while (w <= 20){
        // Jika w modulus 2 hasilnya tidak sama dengan 0
        // Maka print w
        if ( w % 2 != 0){
            printf("%i ", w);
        }
        // Lalu nilai w ditambah 1
        w++;
    }

    printf("\n");

    // Loop Do While
    puts("Looping Do While");
    int d;
    d = 1;
    do {
        // Jika d modulus 2 hasilnya tidak sama dengan 0
        // Maka print d
        if ( d % 2 != 0){
            printf("%i ", d);
        }
        // Lalu nilai d ditambah 1
        d++;
    }
    // Jika nilai d < = 20, maka lakukan looping
    while (d <= 20);
}
