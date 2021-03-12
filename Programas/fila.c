#include <stdio.h>
#include <stdlib.h>

typedef struct fila fila;
typedef struct no no;

struct no{
    int num;
    no *prox;
};

struct fila{
    no *inicio;
    no *fim;
};

fila *criafila()
{
    fila* nova = malloc(sizeof(fila));
    if (nova != NULL)
    {
        nova->inicio = NULL;
        nova->fim = NULL;
    }
    return nova;
}

void enfileira(int y, fila *nova)
{
    if (nova == NULL)
        return;

    // Criacao e preenchimento do novo elemento da fila
    no *newe = malloc(sizeof(no));
    if (newe == NULL)
        return;
    newe->num = y;
    newe->prox = NULL;

    // Fila vazia
    if (nova->fim == NULL)
        nova->inicio = newe;
    // Fila não vazia
    else
        nova->fim->prox = newe;

    nova->fim = newe;
}

void desinfileira(fila *nova)
{
    if (nova == NULL || nova->inicio == NULL)
        return;
    while (nova->inicio != NULL)
    {
        no *aux = nova->inicio;
        nova->inicio = nova->inicio->prox;
        free(aux);
    }
    nova->fim = NULL;
}

void imprimefila(fila *nova)
{
    no *aux = nova->inicio;
    while (aux != NULL)
    {
        printf("%d ",aux->num);
        aux = aux->prox;
    }
    printf("\n");
}






int main()
{
    int n,i=0,num;
    fila *fileira = criafila();
    scanf("%d",&n);

    for(i=0; i < n; i++)
    {
        scanf("%d",&num);
        enfileira(num,fileira);
    }
    imprimefila(fileira);
    desinfileira(fileira);
    imprimefila(fileira);

    return 0;
}
