/*
* Kelomcpok 12
* Andrian James Nandana Siregar (241402096)
* Darren Wangsa (241402074)
* Alya Mufthia (241402133)
* 
* Tugas Kelompok 4
* Program untuk menebak angka antara 1 dan 10
* Program tersebut dimodifikasi sehingga menggunakan fungsi acak.
*/

#include <stdio.h>    // Untuk input-output (printf dan scanf)
#include <stdlib.h>   // Untuk fungsi rand() dan srand()
#include <time.h>     // Untuk fungsi time() agar angka acak berubah setiap waktu


int acak(){
    // generator angka acak                 
    srand(time(NULL));// Mengatur seed angka acak berdasarkan waktu saat ini
    return rand() % 10 + 1; // Mendapatkan angka acak antara 1 dan 10
}

int main() {
    int number, guess, attempts = 0;

   number = acak(); // Memilih angka acak antara 1 dan 10

    printf("Selamat datang di Permainan Tebak Angka!\n");
    printf("Saya sudah memilih angka antara 1 dan 10. Bisakah kamu menebaknya?\n");

    
    // Loop sampai pengguna menebak angka dengan benar
    do {
        printf("Masukkan tebakanmu: ");
        scanf("%d", &guess);      // Mengambil tebakan pengguna
        attempts++;               // Menambah jumlah tebakan

        if (attempts == 3){
        printf("Kamu sudah salah menebak 3 kali. Jawabannya adalah %d\n", number);
        return 0;
        }

        if (guess < number) {     // Jika tebakan lebih kecil dari angka yang dicari
            printf("Terlalu kecil! Coba lagi.\n");
        } else if (guess > number) { // Jika tebakan lebih besar dari angka yang dicari
            printf("Terlalu besar! Coba lagi.\n");
        } else {                  // Jika tebakan benar
            printf("Selamat! Kamu menebak angkanya dalam %d kali tebakan.\n", attempts);
        }
    } while (guess != number);    // Ulangi hingga tebakan benar

    return 0;
}
