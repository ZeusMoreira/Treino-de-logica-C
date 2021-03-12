#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula celula;

struct celula{
    celula *ant;
    int chave;
    celula *prox;
};

celula *crialista()
{
    celula *listadup = malloc(sizeof(celula));
    listadup->ant = NULL;
    listadup->prox = NULL;
    return listadup;
}

void preenchelista(celula *lista)
{
    int n,i=0;
    celula *aux = lista;

    scanf("%d",&n);
    for (i=0; i < n; i++){
        celula *no = malloc(sizeof(celula));
        scanf("%d",&no->chave);

        while (aux->prox != NULL)
            aux = aux->prox;

        no->ant = aux;
        no->prox = aux->prox;
        aux->prox = no;
    }
}

void inserelista(celula *lista,int x)
{
    celula *aux = lista;
    celula *no = malloc(sizeof(celula));
    no->chave = x;
    while (aux->prox != NULL)
            aux = aux->prox;

    no->ant = aux;
    no->prox = aux->prox;
    aux->prox = no;
    printf("Inserido com sucesso\n");
}

celula *buscalista(celula *lista, int x)
{
    celula *aux = lista->prox;
    while (aux != NULL && aux->chave != x)
        aux = aux->prox;

    return aux;
}


void rmvlista(celula *lista, int x)
{
    celula *temp = buscalista(lista,x);
    if (temp != NULL)
    {
        temp->ant->prox = temp->prox;
        if (temp->prox != NULL)
            temp->prox->ant = temp->ant;
        free(temp);
        printf("Removido com sucesso\n");
    }
    else
        printf("Erro na remocao, o item nao esta na lista\n");

}

void imprimlista(celula *lista)
{
    celula *aux = lista;
    lista = lista->prox;
    while (lista != NULL)
    {
        printf("%d ",lista->chave);
        lista = lista->prox;
        free(aux);
        aux = lista;
    }
    printf("\n");
}

int main()
{
    char comando[8];
    int x;
    celula *lista = crialista();
    preenchelista(lista);

    scanf("%s",comando);
    while (strcmp(comando,"sair") != 0){
        if (strcmp(comando,"insere") == 0)
        {
            scanf("%d",&x);
            inserelista(lista,x);
        }

        else if (strcmp(comando,"remove") == 0)
        {
            scanf("%d",&x);
            rmvlista(lista,x);
        }

        scanf("%s",comando);
    }
    imprimlista(lista);
    return 0;
}
