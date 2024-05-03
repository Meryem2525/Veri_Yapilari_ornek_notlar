// Selection Sort
#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void selectionSort(int arr[], int size)
{
	int i, j;
	int minIndex;
	for ( i = 0; i < size; i++)
	{
		minIndex = i;
		for ( j = i; j < size; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

int main()
{
	int array[MAX], size;
	int i;
	printf("Kaç elemanlı bir dizi: ");
	scanf_s("%d", &size);
	for ( i = 0; i < size; i++)
	{
		printf("%d. sayisini giriniz: ",i+1);
		scanf_s("%d ", &array[i]);
	}

	selectionSort(array, size);

		for ( i = 0; i < size; i++)
		{
			printf(" %d ", array[i]);
		}

}

