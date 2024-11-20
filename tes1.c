#include <stdio.h>

int main(){
    int i, j, t;
    printf("masukkan tinggi segitiga yang anda mau = ");
    scanf ("%d", &t);

    for (i = t; i>=1; i--){
            for (j = 1; j <= i; j++){
                printf("%d ", j);
            }
            printf("\n");
        }
        return 0;
}