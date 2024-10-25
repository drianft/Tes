#include <stdio.h>

void desimalKeBiner(int n) {
    if (n > 1) {
        desimalKeBiner(n / 2);  // Rekursif membagi n dengan 2
    }
    printf("%d", n % 2);  // Mencetak sisa pembagian (bit biner)
}

int main() {
    int desimal;

    // Meminta input dari pengguna
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &desimal);

    // Menampilkan hasil konversi
    printf("Biner: ");
    desimalKeBiner(desimal);
    printf("\n");

    return 0;
}
