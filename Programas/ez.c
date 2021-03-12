#include <stdio.h>
#include <stdlib.h>

typedef struct no no;

struct no{
    int chave;
    no *prox;
};


void addlista(no **lista,int x)
{
    no *newba = malloc(sizeof(no)),*q = *lista;
    newba->chave = x;
    newba->prox = NULL;

    if (*lista == NULL)
        *lista = newba;

    else{
        while (q->prox != NULL)
            q = q->prox;

        q->prox = newba;
    }
}


void imprimelista(no *lista) {
     no *q;
     if (lista == NULL)
        printf ("Nao");

     else {
          for (q = lista; q != NULL; q = q->prox)
                printf ("\n%d ", q->chave);
         printf ("\n");
      }
}


int main()
{
    no *lista = NULL;
    int x,n=3,i=0;

    for (i=0; i < n; i++)
    {
        scanf("%d",&x);
        addlista(&lista,x);
    }

    no *p = lista;
    p->chave = p->prox->chave;
    no *aux = p->prox;
    p->prox = p->prox->prox;
    free(aux);

    imprimelista(lista);

    return 0;
}

