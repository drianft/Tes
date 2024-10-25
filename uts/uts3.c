// berapa jumlah huruf berapa jumlah angka dan jumlah lainya
#include <stdio.h>


int main()
{
    char ct;
    int cth = 0, cta = 0, ctl = 0;
    printf("Tuliskan sebuah kalimat:\n");
    scanf("%c" , &ct);
    while (getchar)
    {
        switch (ct)
        {
        case 'a':
        case 'A':
        case 'b':
        case 'B':
        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'E':
        case 'e':
        case 'F':
        case 'f':
        case 'g':
        case 'G':
        case 'h':
        case 'H':
        case 'i':
        case 'I':
        case 'j':
        case 'J':
        case 'k':
        case 'K':
        case 'l':
        case 'L':
        case 'M':
        case 'm':
        case 'n':
        case 'N':
        case 'o':
        case 'O':
        case 'p':
        case 'P':
        case 'q':
        case 'Q':
        case 'r':
        case 'R':
        case 'S':
        case 's':
        case 't':
        case 'T':
        case 'u':
        case 'U':
        case 'V':
        case 'v':
        case 'w':
        case 'W':
        case 'X':
        case 'x':
        case 'y':
        case 'Y':
        case 'z':
        case 'Z':
            cth++;
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            cta++;
            break;

        default:
            ctl++;
            break;
        }
        ct++;
    }
    

    printf("Jumlah karakter = %d\n", ct);
    printf("jlh huruf = %d\n", cth);
    printf("jlh angka = %d\n", cta);
    printf("jlh lainnya = %d\n", ctl);
    return 0;
}
