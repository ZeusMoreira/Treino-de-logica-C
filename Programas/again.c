#include <stdio.h>
#include <stdlib.h>

typedef struct no no;

struct no{
    int chave;
    no *prox;
};

void addlista(no **dir,int x)
{
    no *newba = malloc(sizeof(no)),*q = *dir;
    newba->chave = x;
    newba->prox = NULL;

    if (*dir == NULL)
        *dir = newba;

    else
    {
        while (q->prox != NULL)
            q = q->prox;
        q->prox = newba;
    }
}

void percorre(no **esq,no *dir)
{
    no *aux;
    while (dir != NULL){
        aux = *esq;
        (*esq)->prox = aux;
        *esq = dir;
        dir = dir->prox;
        if (aux != NULL){
            aux->prox = (*esq)->prox;
            printf("a: %d\n",aux->chave);
            printf("a: %d\n",aux->prox->chave);

        }
        else
            printf("a: NULL\n");
        printf("e: %d\nd: %d\n\n",(*esq)->chave,dir->chave);
    }
}


int main()
{
    no *esq = NULL;
    no *dir = NULL;
    int x,n=5,i=0;

    for (i=0; i < n; i++)
    {
        scanf("%d",&x);
        addlista(&dir,x);
    }

     for (i=0; i < n-1; i++)
    {
        percorre(&esq,dir);
    }



    return 0;
}
