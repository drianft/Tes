/*
* Kelompok 12
* Andrian James Nandana Siregar (241402096)
* Darren Wangsa (241402074)
* Alya Mufthia (241402133)
* 
* Tugas Kelima untuk kelompok
* Program ini mengubah bilangan desimal ke bilangan biner.
* Program ini akan menghitung jumlah digit versi biner dari angka input.
*/

#include <stdio.h>

int x = 0, arr[1000], y = 0, inp;


int recur(int inp) {
    if (inp > 0) {
        arr[x] = inp % 2;  // Simpan digit biner
        x++;               // Tambahkan indeks
        recur(inp / 2);    // Rekursi untuk sisa bilangan
    }
        return 0;
    }

int main() {
    printf("Program ini akan menghitung jumlah digit versi biner dari angka input. \n");
    printf("Input angka yang anda mau: ");
    scanf("%d", &inp);

    recur(inp); 

    printf("Bilangan biner dari %d adalah: ", inp);
    if (inp < 0)
        printf("\nGaada angka biner di mines kocak\n");
    
    else{

    for (int j = x - 1; j >= 0; j--) { //Cetak bilangan biner dari belakang
        printf("%d", arr[j]);
        y++; //Hitung jumlah digit
    }

    printf("\nJumlah digit biner: %d\n", y);
    }
    return 0;
}