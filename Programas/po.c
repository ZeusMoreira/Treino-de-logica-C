#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct celula celula;

struct celula{
    int chave;
    celula *prox;
};


void imprimelista(celula *lista) {
     celula *q;

    for (q = lista->prox; q != NULL; q = q->prox){
            printf ("%d ", q->chave);
            free(q);
    }
    free(lista);
    printf ("\n");

}

void adicionat(celula *cabeca,celula *no)
{
    celula *ax = cabeca;
    while (ax->prox != NULL)
        ax = ax->prox;
    ax->prox = no;
}

void preenche(celula *cabeca,int n)
{
    celula *aux = cabeca;
    int num;
    for(int i=0; i < n; i++)
    {
        scanf("%d",&num);
        celula *nova = malloc(sizeof(celula));
        nova->chave = num;
        nova->prox = NULL;
        adicionat(aux,nova);
    }
}

celula *uniao(celula *p1, celula *p2)
{
    celula *un = malloc(sizeof(celula));
    un->prox = NULL;
    celula *q;
    celula *q2;

    celula *aux = p1->prox;



    while (aux != NULL)
    {
        celula *no = malloc(sizeof(celula));
        no->chave = aux->chave;
        no->prox = NULL;
        adicionat(un,no);
        aux = aux->prox;
    }


    for (q = p2->prox; q != NULL; q = q->prox)
    {

        for (q2 = p1->prox; (q2 != NULL) && (q2 != q); q2 = q2->prox)
        {

            if (q2->prox == NULL && (q2->chave != q->chave))
                adicionat(un,q);

            else if (q2->chave == q->chave)
                break;
        }
    }

    return un;
}

void free_t(celula *cabeca)
{
     if (cabeca->prox == NULL)
        free(cabeca);

     else{
        while (cabeca != NULL)
        {
            celula *tmp = cabeca;
            cabeca = cabeca->prox;
            free(tmp);
        }
     }
}

int main()
{
    int n;
    celula *head =  malloc(sizeof(celula));
    head->prox = NULL;
    printf("Digite o tamanho do conjunto S1: ");
    scanf("%d",&n);
    preenche(head,n);


    celula *head2 = malloc(sizeof(celula));
    head2->prox = NULL;
    printf("Digite o tamanho do conjunto S2: ");
    scanf("%d",&n);
    preenche(head2,n);

    celula *un = uniao(head,head2);
    free_t(head);
    free_t(head2);

    imprimelista(un);

    return 0;
}
