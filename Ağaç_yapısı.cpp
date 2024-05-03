#include <stdlib.h>
#include <stdio.h>

struct node
{
	int data;
	node* sol;
	node* sag;
};


node* ekle(node* agac, int x) {
	if (agac == NULL) {
		node* root = (node*)malloc(sizeof(node));
		root->sol = NULL;
		root->sag = NULL;
		root->data = x;
		return root;

	}

	if (agac->data < x) {
		agac->sag = ekle(agac->sag, x);
		return agac;
	}

	agac->sol = ekle(agac->sol, x);
	return agac;
}

void dolas(node* agac) {
	if (agac == NULL) {
		return;
		dolas(agac->sol);
		printf("%d - ", agac->data);
		dolas(agac->sag);
	}
}

int max(node* agac) {
	while (agac->sag != NULL)
		agac = agac -> sag;
	return agac->data;
}
int min(node* agac) {
	while (agac->sol !=NULL)
	{
		agac = agac->sol;
	}
	return agac->data;
}

