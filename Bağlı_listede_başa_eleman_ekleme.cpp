// Bağlı_listede_başa_eleman_ekleme

#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	node* next;
};
struct node* bas = NULL;  //   node* bas = NULL;
struct node* temp = NULL;  // node* temp = NULL;

void basaEkle(int sayi)
{
	node* eklenecek;
	eklenecek = (node*)malloc(sizeof(node));
	eklenecek->data = sayi;
	eklenecek->next = bas;
	bas = eklenecek;

}
void yazdir()
{
	temp = bas;
	while (temp->next != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;

	}
	printf("%d", temp->data);
}

int main()
{
	int sayi,i;
	for ( i = 0; i <6; i++)
	{
		printf("%d. sayiyi giriniz: ",i + 1);
		scanf_s("%d", &sayi);
		basaEkle(sayi);

	}
	yazdir();
	return 0;
}



