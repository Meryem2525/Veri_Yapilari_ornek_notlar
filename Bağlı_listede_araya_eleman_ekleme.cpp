// Bağlı_listede_araya_eleman_ekleme

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	node* next;  // gösterici
};

struct node* start = NULL;
struct node* temp = NULL;  // temp= geçici

void basaEkle(int veri) {
	node* eleman;
	eleman = (node*)malloc(sizeof(node));
	eleman->data = veri;
	eleman->next = start;
	start = eleman;

}

void sonaEkle(int veri) {
	node* eleman;
	eleman = (node*)malloc(sizeof(node));
	eleman->data = veri;
	eleman->next = NULL;
	if (start == NULL) {
		start = eleman;
	}
	else
	{
		temp = start;
		while (temp->next = NULL)
		{
			temp = temp->next;
		}
		temp = eleman;
	}

}





void arayaEkle(int n, int sayi) {
	node* eleman;
	eleman = (node*)malloc(sizeof(node));
	eleman->data = sayi;

	temp = start;

	while (eleman->next->data != n) {
		temp = temp->next;

	}

	node* temp2;
	temp2 = (node*)malloc(sizeof(node));
	temp2 = temp->next;
	temp->next = eleman;
	eleman->next = temp2;
}





void yazdir() {
	temp = start;
	while (temp->next != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("%d", temp->data);
}
int main()
{
	int n,sayi, adet = 0, secim;
	while (adet != 6)
	{


		printf("\n Basa eleman eklemek icin 1 \n");
		printf("\nSona eleman eklemek icin 2 \n");
		printf("\naraya eleman eklemek icin 3 \n");
		printf("\nYapmak istediginiz işlemi seciniz:  \n");
		scanf_s("%d", &secim);

		switch (secim)
		{
		case 1: printf("basa eklenecek degeri giriniz: \n");
			scanf_s(" %d", &sayi);
			basaEkle(sayi);
			yazdir();
			break;


		case 2: printf("sona eklenecek degeri giriniz: \n");
			scanf_s(" %d", &sayi);
			sonaEkle(sayi);
			yazdir();
			break;

		case 3:
			printf("hangi sayidan once:");
			scanf_s(" %d", &n);
			printf("araya eklenecek degeri giriniz: \n");
			scanf_s(" %d", &sayi);
			arayaEkle(n, sayi);
			yazdir();
			break;

		}
		adet++;
	}
	return 0;
}

