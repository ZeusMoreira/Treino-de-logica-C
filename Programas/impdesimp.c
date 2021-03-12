#include <stdio.h>
#include <stdlib.h>

typedef struct pilha pilha;

struct pilha{
    int num;
    pilha *prox;
};

pilha* criapilha(){
    pilha *topo = malloc(sizeof(pilha));
    if (topo == NULL)
        return 0;
    topo->prox = NULL;
    return topo;
}

void empilha(int y,pilha *topo){
    pilha *celula = malloc(sizeof(pilha));
    if (celula == NULL || topo == NULL)
        return;
    celula->num = y;
    celula->prox = topo->prox;
    topo->prox = celula;
}

void desempilha(pilha *topo){
    pilha *aux;

    if (topo->prox != NULL)
    {
        aux = topo->prox;
        topo->prox = aux->prox;
        free(aux);
    }
    else
        printf("Pilha vazia\n");
}

void imprimepilha(pilha *topo)
{
    pilha *aux = topo;
    while (aux->prox != NULL)
    {
        printf("%d ",aux->prox->num);
        aux = aux->prox;
    }
    printf("\n");
}

int main()
{
    int n,i,d;
    pilha *t = criapilha();

    scanf("%d",&n);
    for(i=0; i < n; i++){
        scanf("%d",&d);
        empilha(d,t);
    }
    imprimepilha(t);
    for (i=0; i < n; i++){
        desempilha(t);
        imprimepilha(t);
    }
    return 0;
}
