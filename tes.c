/* Nama file: uts_2024_1.c
   Tentukan huruf besar atau huruf kecil
   dan kode ASCII  */
   /*ubah program ini sehingga ia menggunakan pointer
   SIapkan pointer ke integer, alokasikan dulu memori untuk ch ptr
   chptr*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *chptr;
	printf("Lokasi Memory chptr = %p\n", &chptr);
	
    chptr = (char *) malloc(sizeof(char));
    printf("Lokasi Memory yang ditunjuk oleh chptr = %p\n", *chptr);

	return 0;
}