
#include <stdio.h>

void tukar(int x, int y); // Deklarasi fungsi

void main(){
    int a,b;

    a = 15;
    b = 10;

    printf("Nilai sebelum pemanggilan fungsi\n");
    printf("a = %i, b = %i\n\n", a, b);

    tukar(a,b);

    printf("Nilai setelah pemanggilan fungsi\n");
    printf("a = %i, b = %i\n\n", a, b);
}

void tukar(int x, int y){
    int z;
    z = x;
    x = y;
    y = z;
    printf("Nilai di akhir fungsi tukar()\n");
    printf("x = %i, y = %i\n\n", x, y);
}
