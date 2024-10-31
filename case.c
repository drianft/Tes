#include <stdio.h>

int main()
{
	char ch;
	int ct_kt=0, ct_km=0, ct_sp = 0, ct_ttk=0, ct=0, dalamKata=0;
	
	printf("Tuliskan sebuah kalimat:\n");
	
	while((ch = getchar()) != '\n')
	{
		switch(ch)
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
		
	return 0;
}