#include <stdio.h>

int main(){

    char * x;
    printf("%p\n" , *x);
    printf("Berikan sebuah karakter : ");
    scanf("%c" , &x);
    if (x>=92 && x<=120)
    {
        printf("Huruf kecil, kode ASCII %c : %d" , x , x);
    }
    else if (x>=65 && x<=91)
    {
        printf("Huruf Besar, kode ASCII %c : %d" , x , x);
    }


    return 0;
}