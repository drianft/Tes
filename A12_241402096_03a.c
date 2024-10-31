/* 
* Kelomcpok 12
* Andrian James Nandana Siregar (241402096)
* Darren Wangsa (241402074)
* Alya Mufthia (241402133)
* 
* Tugas ketiga untuk kelompok
* Program untuk menentukan sebuah bilangan Ganjil/Genap dan Positif/Negatif.
* Program tersebut dimodifikasi sehingga menggunakan pointer.
*
* Program ini menentukan apakah suatu bilangan adalah Ganjil atau Genap dan Positif atau Negatif ditambahkan modifikasi dengan menggunakan pointer.
*/
   
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *bil_ptr;
	
    printf("Lokasi memori yang ditunjuk : %p\n" , bil_ptr);

    bil_ptr = (int *)malloc(sizeof(int));
    printf("Lokasi Memorinya adalah %p\n", &bil_ptr);
	printf("Berikan sebuah bilangan bulat: ");
	if(scanf("%d", &bil_ptr) != 0)
	{
		if(bil_ptr > 0)
		{
			printf("%d: positip ", bil_ptr);	
			if(*bil_ptr % 2 == 0)
				printf("dan genap\n");
			else
				printf("dan ganjil\n");
		}
		else if(bil_ptr < 0)
		{
			printf("%d: negatip ", bil_ptr);	
			if(*bil_ptr % 2 == 0)
				printf("dan genap\n");
			else
				printf("dan ganjil\n");
		}
		else
			printf("%d ", bil_ptr);
	}
	else
		printf("Bukan bilangan\n");
	
    free(bil_ptr);

	return 0;
}