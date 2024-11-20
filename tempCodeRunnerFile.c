#include <stdio.h>

int x = 0, arr[1000], y = 0, inp;

// Fungsi rekursif untuk mengonversi bilangan ke biner
void recur(int inp) {
    if (inp < 0) {
        return;
    }
    arr[x] = inp % 2;  // Simpan digit biner
    x++;               // Tambahkan indeks
    recur(inp / 2);    // Rekursi untuk sisa bilangan
}

int main() {
    printf("Program ini akan menghitung jumlah digit versi biner dari angka input. \n");
    printf("Input angka yang anda mau: ");
    scanf("%d", &inp);

    recur(inp); // Panggil fungsi rekursif

    printf("Bilangan biner dari %d adalah: ", inp);
    
    
    for (int j = x - 1; j >= 0; j--) { // Cetak bilangan biner dari belakang
        printf("%d", arr[j]);
        y++; // Hitung jumlah digit
    }

    printf("\nJumlah digit biner: %d\n", y);

    return 0;
}