
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// typedef mevcut veri türlerine alternatif adlar atmak için c dillinde kullanılan bir anahtar sözcüktür.


typedef struct ogrenci
{
	char isim[20];
	int numara;
	int puan;
} Ogrenci;




//typedef struct ogrenci Ogrenci;


struct ogrenci
{
	char isim[20];
	int numara;
	int puan;
};



int main()
{
	struct ogrenci ogrenci1 = { "ali",222701005, 85 };

	struct ogrenci ogrenci2;
	strcpy_s(ogrenci2.isim, "veli");
	ogrenci2.numara = 1038228421;
	ogrenci2.puan = 37;

	struct ogrenci* ogrenci3;
	ogrenci3 = &ogrenci1;


	Ogrenci ogrenci4;
	scanf_s("%s", &ogrenci4.isim);
	scanf_s("%f", &ogrenci4.numara);
	scanf_s("%f", &ogrenci4.puan);

	printf("%s numara: %i puan: %i \n", ogrenci1.isim, ogrenci1.numara, ogrenci1.puan);
	printf("%s numara: %i puan: %i \n", ogrenci2.isim, ogrenci2.numara, ogrenci2.puan);
	
	printf("%s numara: %i puan: %i \n", ogrenci3->isim, ogrenci3->numara, ogrenci3->puan);
	
	
	return 0;
}

/*
int gectimi(Ogrenci* kontrol)
{
	if (kontrol->puan >= 50)
		return 1;
	else
		return 0;
}
*/

