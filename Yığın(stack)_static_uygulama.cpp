// Yığın(stack)_static_uygulama
#include <stdio.h>
#include <stdlib.h>
#define BOY 10

struct yigin {
	int dizi[BOY];
	int indis;
};

struct yigin y1;

void elemanEkle(int sayi )
{
	if (y1.indis == BOY - 1)
	{
		printf("Yigin  doludur!!!\n");
	}
	else
	{
		y1.indis++;
		y1.dizi[y1.indis] = sayi;
	}
}

void elemanCikar()
{
	if (y1.indis == -1)
	{
		printf("Yigin bostur. cikacak eleman yoktur.");
	}
	else {
		int cikanSayi = y1.dizi[y1.indis];
		y1.indis--;
		printf("%d.sayiyi yigindan cikarildi.",cikanSayi);
	}
}
 
void yazdir() {
	system("cls");

	if (y1.indis == -1) {
		printf("yigin bostur!!");
	}
	else {
		int i;
		for ( i=y1.indis; i > -1 ; i--)
		{
			printf("%d", y1.dizi[i]);
		}
	}
}

int main() {
	y1.indis = -1;
	while (1)
	{

	
	int secim, sayi;
	printf("\nSTACK YİGİN\n");
	printf("1--->eleman ekle(push)\n");
	printf("2--->eleman cikar(pop)\n");
	printf("3--->yazdir(display)\n");
	printf("CİKİS (EXİT)\n");
	printf("isleminizi seciniz: \n");
	scanf_s("%d", &secim);

	switch (secim)
	{
	case 1:printf("eklenecek sayi \n");
		scanf_s("%d", &sayi);
		elemanEkle(sayi);
		break;
	case 2:
		elemanCikar();
		break;
	case 3:
		yazdir();
		break;
	case 4:
		printf("programdan cikariliyorrr...");
		return 0;

	}

	}
}