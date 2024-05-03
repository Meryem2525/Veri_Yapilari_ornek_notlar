// Tek_yölü_bağlı_liste

#include <iostream>
#include <stdlib.h>
#include <stdio.h>


typedef struct NODE {
	// düğüme ait veri
	// farklı tipte değişkenler burada tanımlanabilir
	int x;
	//bir sonraki düğümün adresi
	struct NODE* next;
}NODE;


// tek yönlü bağlı listede yeni bir oluşturan fonksiyon.
NODE* CreateNode(int x) {
	//yeni düğüm için bellekten yer ayrılacak
	NODE* node;
	node = (node*)malloc(sizeof(node));
	if (node) {
		// yeni düğüme veri kaydediliyor
		node->x = x;
		//NULL anlamı sonrasında düğüm olmasdır

	}
	return node;

}
//tek yönlü bağlı listede düğüm silme fonk.
//ilk düğümü silmek için fonk.RemoveNode(NULL,ilk



void PrintList(NODE* root) {
	NODE* tmp = root;
}
int main()
{
	system("PAUSE");
	return 0;
}

