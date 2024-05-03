// Bağlı_Liste

#include <iostream>
#include <stdio.h>
#include <stdlib.h>


struct n {
	int data;
	n* next;
};
typedef n node;


int main()
{
	node* root;
	root = (node*)malloc(sizeof(node));
	root->data = 10;
	root = (node*)malloc(sizeof(node));
	root->next->data = 20;
	root = (node*)malloc(sizeof(node));
	root->next->next->data = 30;

	node* iter;

	iter = root;
	printf("%d", iter->data);

	iter = iter->next;
	printf("%d", iter->data);

	iter = iter->next;
	printf("%d", iter->data);

	return 0;

}

