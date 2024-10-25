#include <stdio.h>

int main(){

    int a ;
    printf("Berikan sebuah bilangan : ");
    scanf("&d" ,&a);

    if (a > 0 && a % 2 == 0)
        printf("%d , adalah bil. Positif, Genap" , a);
    else if (a > 0 && a % 2 == 1)
        printf("%d , adalah bil. Positif, Ganjil" , a);
    else if (a < 0 && a % 2 == 0)
        printf("%d , adalah bil. Negatif, Genap" , a);
    else if (a < 0 && a % 2 == 1)
        printf("%d , adalah bil. Negatif, Ganjil" , a);
    else
        printf("%d , adalah 0" , a);

    return 0;
}