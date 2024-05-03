// Bağlı_liste_başa_ve_sona_eleman_ekleme

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
		while (temp->next !=NULL)
		{
			temp = temp->next;
		}
		temp = eleman;
	}

}

void yazdir() {
	temp = start;
	while (temp->next !=NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);
}
int main()
{
	int sayi, adet = 0, secim;
	while (adet !=6)
	{

	
	printf("\n Başa eleman eklemek icin 1 \n");
	printf("\nSona eleman eklemek icin 2 \n");
	printf("Yapmak istediginiz işlemi seciniz \n");
	scanf_s("%d", &secim);

	switch (secim)
	{
	case 1: printf("basa eklenecek degeri giriniz: \n");
		scanf_s("%d", &sayi);
		basaEkle(sayi);
		yazdir();
		break;

	
	case 2: printf("basa eklenecek degeri giriniz: \n");
		scanf_s("%d", &sayi);
		sonaEkle(sayi);
		yazdir();
		break;

	}
	adet++;
	}
	return 0;
}
