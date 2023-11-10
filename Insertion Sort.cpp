// Insertion Sort

#include <stdlib.h>
#include <stdio.h>

int dizi[];
int key;
//adet= elemanSayisi
void insertionSort(int dizi[], int elemanSayisi)
{
	int i, j;
	for ( i = 0; i < elemanSayisi; i++)
	{
		key = dizi[i];
		j = i - 1;
		while (key < dizi[j] && j >= 0) {
			dizi[j + 1] = dizi[j];
			j--;
		}
		dizi[i + j] = key;
	}
}

int main()
{
	int i ,adet;
	printf("Dizinin eleman sayisini giriniz:");
	scanf_s("%d", &adet);

	for ( i = 0; i < adet; i++)
	{
		printf("%d. sayiyi giriniz:", i + 1);
		scanf_s("%d", &dizi[i]);
	}

	insertionSort(dizi, adet);
	for ( i = 0; i < adet; i++)
	{
		printf("%d ", dizi[i]);
	}

		return 0;
}
