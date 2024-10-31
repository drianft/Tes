/*
* Kelomcpok 12
* Andrian James Nandana Siregar (241402096)
* Darren Wangsa (241402074)
* Alya Mufthia (241402133)
* 
* Tugas ketiga untuk kelompok
* Program untuk menghitung jumlah karakter, kata, spasi, koma dan juga spasi.
* Program tersebut dimodifikasi sehingga menggunakan pointer.
*
* Program ini menghitung jumlah karakter, kata, spasi, koma dan juga spasi ditambahkan modifikasi dengan menggunakan pointer.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *chptr;
	int ct_kt=0, ct_km=0, ct_sp = 0, ct_ttk=0, ct=0, dalamKata=0;

    printf("Lokasi memori chptr: %p\n", &chptr);
    chptr = (char *) malloc (sizeof(char));
	
	printf("Tuliskan sebuah kalimat:\n");
	
	while((*chptr = getchar()) != '\n')
	{
		switch(*chptr)
		{
            case 'a' ... 'z':
            case 'A' ... 'Z':
                if (dalamKata == 0){
                ct_kt++;
                dalamKata = 1;
                }
                break;
            case '0' ... '9':
                if (dalamKata == 0){
                ct_kt++;
                dalamKata = 1;
                }
                break;
			case ',': ct_km++;
					  dalamKata = 0;
					  break;
			case ' ': ct_sp++;
					  dalamKata = 0;
					  break;
			case '.': ct_ttk++;
					  break;
		}
		ct++;
	}	
	printf("Jumlah karakter = %d\n", ct);
	printf("jhl kata = %d\n", ct_kt);
	printf("jlh koma = %d\n", ct_km);
	printf("jlh spasi = %d\n", ct_sp);
	printf("jlh titik = %d\n", ct_ttk);
		
		free(chptr);
	return 0;
}