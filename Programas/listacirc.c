#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula celula;

struct celula{
    int chave;
    celula *prox;
};


celula *criacirc()
{
    celula *no = malloc(sizeof(celula));
    no->prox = no;
    return no;
}

void preenchecirc(celula *lista,int n)
{
    int i;
    celula *aux = lista;
    scanf("%d",&aux->chave);

    for (i=1; i < n; i++)
    {
        celula *no = malloc(sizeof(celula));
        scanf("%d",&no->chave);
        aux->prox = no;
        no->prox = lista;
        aux = aux->prox;
    }
}


void inserecirc(celula *lista,int *n)
{
    celula *h = lista;
    int j=0;
    while (j < *n-1)
    {
        h = h->prox;
        j++;
    }
    celula *no = malloc(sizeof(celula));
    scanf("%d",&no->chave);

    h->prox = no;
    no->prox = lista;
    (*n)++;
}

void imprimcirc(celula *lista,int n)
{
    celula *h = lista;
    int j=0;
    while (j < n)
    {
        printf("%d ",h->chave);
        h = h->prox;
        j++;

    }
    printf("\n");
}

void rmvcirc(celula *lista,int *n,int x)
{
    celula *aux = lista;
    celula *aux2 = lista->prox;
    int j=0;
    while (aux2->chave != x || j < *n)
    {
        aux = aux2;
        aux2 = aux2->prox;
        j++;
    }

    aux->prox = aux2->prox;
    free(aux2);
    (*n)--;

}

void freecirc(celula *lista,int n)
{
    int j=0;
    celula *aux;
    while(j < n)
    {
        aux = lista;
        lista = lista->prox;
        free(aux);
        j++;
    }

}




int main()
{
    celula *elem = criacirc();
    int n,x;
    scanf("%d",&n);
    preenchecirc(elem,n);
    imprimcirc(elem,n);
    inserecirc(elem,&n);
    imprimcirc(elem,n);
    scanf("%d",&x);
    rmvcirc(elem,&n,x);
    imprimcirc(elem,n);
    freecirc(elem,n);
    return 0;
}
