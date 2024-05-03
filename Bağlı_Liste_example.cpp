// Bağlı_Liste_example

#include <stdio.h>
#include <stdlib.h>

struct node { // yapı oluşturma
	int data;
	node* gosterici;
};

int main()
{
	node*bir;             // düğüm oluşturma
	bir = (node*)malloc(sizeof(node));  //bellekte yer ayırma

	node* iki;
	iki = (node*)malloc(sizeof(node));
	
	node* uc;
	uc = (node*)malloc(sizeof(node));
	

	bir->data = 20;      //  veri girişi yaptık
	bir->gosterici = iki;  // bir sonraki düğümü gösterdik

	iki->data = 40;
	iki->gosterici = uc;

	uc->data = 60;
	uc->gosterici = NULL;

	printf("%d - %d - %d - %d ", bir->data, iki->data, uc->data);
	




	return 0;
}

