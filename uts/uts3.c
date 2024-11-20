#include <stdio.h>
#include <ctype.h>

void cek_karakter(char ct, int *cth, int *cta, int *ctl) {
    switch (ct) {
        case 'a' ... 'z':
        case 'A' ... 'Z':
            (*cth)++;
            break;
        case '0' ... '9':
            (*cta)++;
            break;
        default:
            (*ctl)++;
            break;
    }
}

int main() {
    char ct;
    int cth = 0, cta = 0, ctl = 0;
    printf("Tuliskan sebuah kalimat:\n");
    while ((ct = getchar()) != '\n') {
        cek_karakter(ct, &cth, &cta, &ctl);
    }

    printf("Jumlah karakter = %d\n", cth + cta + ctl);
    printf("jlh huruf = %d\n", cth);
    printf("jlh angka = %d\n", cta);
    printf("jlh lainnya = %d\n", ctl);
    return 0;
}

//menebak angka sampe sekian kali, 