

#include <stdio.h>
#include <stdlib.h>

void quickSort(int dizi[], int bas, int son)
{
	int i, j, bas, son, pivot,temp;
	 i = bas;
	 j = son;
	 pivot = dizi[i + j] / 2;    //ortanca sayı

	 do
	 {
		 while (dizi[i] < pivot)
			 i++;
		 while (dizi[j] > pivot)
			 i--;

		 if (i <= j)
		 {
			 temp = dizi[i];
			 dizi[i] = dizi[j];
			 dizi[j] = temp;
			 i++;
			 j--;

		 }
	 } while (i<j);
	 
	 if (i < son)
		 quickSort(dizi, i, son);
	 if (bas > j)
		 quickSort(dizi, j, bas);


}


int main() {
	int n;
	printf("dizi sayisini giriniz: ");
	scanf_s("%d", &n);
	int  dizi[n];
	int i = 0;
	while (i<n)
	{
		printf("sayi: ");
		scanf_s("%d", &dizi[i]);
		i++;
	}
	quickSort(dizi, 0, n - 1);
	for (i = 0; i < n; i++)
		printf("%d ", dizi[n]);

 
	return 0;
}

