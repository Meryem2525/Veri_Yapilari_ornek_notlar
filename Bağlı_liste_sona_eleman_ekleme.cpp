// Bağlı_liste_sona_eleman_ekleme

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    node* gosterici;
};
struct node* bas = NULL;
struct node*gecici = NULL;

void sonaEkle(int sayi)
{
    node* eklenecek;
    eklenecek = (node*)malloc(sizeof(node));
    eklenecek->data = sayi;
    eklenecek->gosterici = NULL;
    
    if (bas == NULL) 
    {
        bas = eklenecek;
    }
    else {
        gecici = bas;
        while (gecici->gosterici!=NULL)
        {
            gecici = gecici->gosterici;
        }
        gecici->gosterici = eklenecek;
    }
}
void yazdir()
{
    gecici = bas;
    while (gecici->gosterici != NULL)
    {
        printf("%d ", gecici->data);
        gecici = gecici->gosterici;
    }
    printf("%d ", gecici->data);
}

int main()
{
    int sayi;
    for (int i = 0; i < 4; i++)
    {
        printf("%d. sayiyi yaziniz:", i + 1);
        scanf_s("%d", &sayi);
        sonaEkle(sayi);
    }
    yazdir();
    return 0;
}
