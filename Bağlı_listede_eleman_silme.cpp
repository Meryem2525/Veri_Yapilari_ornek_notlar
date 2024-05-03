// Bağlı_listede_eleman_silme

#include <stdlib.h>
#include <stdio.h>

void sondanSil() {
	if (temp->next != NULL) {
		temp = start;
		while (temp->next-next!=NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}
void arayaElemanEkle(int n, int sayi) {
	node* eleman;
	eleman = (node*)malloc(sizeof(node));
	eleman->data = sayi;
	temp = start;
	while (eleman->next->data != n)
	{
		node* temp2;
		temp2 = (node*)malloc(sizeof(node));
		temp2 = temp->next;
		temp->next = eleman;
		eleman->next = temp2;
	}
}

int main()
{
   
}

