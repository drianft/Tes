#include <stdio.h>

int main(){

    //Deklarasi array
    int bilangan[] = {6, 12, 11, 5, 27, 10};
    int i, jlh_bil, total = 0;
    float rata2;

    //Menghitung jumlah bilangan
    jlh_bil = sizeof(bilangan) / sizeof(int);
    for ( i = 0; i < jlh_bil; i++)
    {
        total += bilangan[i];
        rata2 = (float)total / (float)jlh_bil;
        printf("Rata-rata dari bilangan adalah: %.2f\n", rata2);

    }
    


    return 0;
}