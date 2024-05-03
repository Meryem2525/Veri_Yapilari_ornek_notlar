// Bubble_Sort


#include <stdlib.h>
#include <stdio.h>

int main()
{
	int dizi[100], i, j, sayi, temp;

	printf("Dizinin eleman sayisini giriniz: ");
	scanf_s("%d", &sayi);

	for ( i = 0; i < sayi; i++)
	{
		printf("%d. eleman değerini giriniz: ", i + 1);
		scanf_s("%d", &dizi[i]);
	}
	for ( i = 0; i < (sayi-1); i++)
	{
		for ( j = 0; j < sayi-1-i; j++)
		{
			if (dizi[j] > dizi[j + 1]) {
				temp = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = temp;
			}
		}
	}
	printf("Bubble sorta gore siralama :\n");
	for ( i = 0; i < sayi; i++)
	{
		printf("%d", &dizi[i]);
	}

	return 0;
}
