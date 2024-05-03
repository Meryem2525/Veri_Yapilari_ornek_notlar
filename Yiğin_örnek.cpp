

#include <stdio.h>
#include <stdlib.h>
#define BOYUT 4


int kuyruk[BOYUT], front = -1, rear = -1;

void enQueue(int veri) {

	if (rear == BOYUT) {
		printf("\n kuruk dolu \n");
	}
	else {
		if (front == -1) {
			front = 0;

		} 
		rear = rear + 1;
		kuyruk[rear] = veri;
	}
}

void deQueue() {
	if (front == -1 || front > rear) {
		printf("\n kuyruk bos \n");
		front = -1;
		rear = -1;

	}
	else {
		front = front + 1;
	}
}


void display() {
	int i;
	for ( i = front; i <=rear; i++)
	{
		printf("%d_", kuyruk[i]);
	}
	
}
int main()
{
	int secim;
	while (1 == 1) {
		printf("\n 1-enQueue");
		printf("\n 2-deQueue");
		printf("\n Yapmak istediğiniz işiem -->");
		scanf_s("%d", &secim);
		

		switch (secim)
		{
		case1:
			printf("\n veri giriniz -->");
			scanf_s("%d", &secim);
			enQueue(secim);
			display();
			break;

		case2:
			deQueue();
			display();
			break;
		}
	}
	system("PAUSE");
	return 0;
}

