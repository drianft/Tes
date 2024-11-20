#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNum(int min, int max){
    return rand() % max + min;
}

int main(){
    int min = 1;
    int max = 100;
    printf("Angka acak %d" , randNum(min, max));

}
// int guess(int random){
//     int guess;
//     int attempt = 0;
//     do{
//         printf("Masukkan tebakan: ");
//         scanf("%d", &guess);
//         attempt++;
//         if(guess > random){
//             printf("Tebakan terlalu besar\n");
//         }else if(guess < random){
//             printf("Tebakan terlalu kecil\n");
//         }
//     }while(guess != random);
//     return attempt;
// }

// int main(){
//     srand(time(0));
//     int random = randNum(1, 10);
//     int attempt = guess(random);
//     printf("Tebakan benar! Anda menebak sebanyak %d kali\n", attempt);
//     return 0;
// }