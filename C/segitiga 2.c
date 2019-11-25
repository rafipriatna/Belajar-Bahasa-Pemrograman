#include <stdio.h>

void main(){
    int a,b,c,d;

    for (a = 0; a <= 5; a++){
        for (b = a; b >= 0; b--){
            printf("* ");
        }
        printf("\n");
    }
    for (a = 0; a <= 4; a++){
        for (b = a; b <= 4; b++){
            printf("* ");
        }
        printf("\n");
    }
}
