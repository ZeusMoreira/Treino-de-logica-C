#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct lista lista; // Lista em si
typedef struct opc opc; // Opcoes sobre criação da lista

struct opc{
    char op[8];
    char rec[5];
};

struct lista{
    int chave;
    lista *prox;
};

void limpabuffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}


// OPÇÕES PARA CRIAÇÃO DA LISTA COM CABEÇA

void adicionat(lista *cabeca,lista *celula)
{
    lista *ax = cabeca;
    while (ax->prox != NULL)
        ax = ax->prox;
    ax->prox = celula;
}

lista *cria(){
    lista *cabeca = malloc(sizeof(lista));
    cabeca->prox = NULL;
    return cabeca;
}


int ordenaR(lista *cheia,int menor)
{
    lista *temp = cheia;

    if (temp->chave < menor)
        menor = temp->chave;

    if (temp->prox == NULL)
        return menor;

    else
        return ordenaR(temp->prox,menor);

}

int ordenaS(lista *cheia,int menor)
{
    lista *temp = cheia;
    while (temp->prox != NULL)
    {
        if (temp->chave < menor)
            menor = temp->chave;
        temp = temp->prox;
    }
    return menor;
}


lista *preenche(lista *cabeca,int n)
{
    lista *aux = cabeca;
    int num;
    for(int i=0; i < n; i++)
    {
        scanf("%d",&num);
        lista *celula = malloc(sizeof(lista));
        celula->chave = num;
        celula->prox = NULL;
        adicionat(aux,celula);
    }
    return aux;
}

void imprime_limp(lista *aux,char *str)
{
    lista *imp = aux;
    printf("Lista c/cabeca\n");
    if (strcmp(str,"crec") == 0)
        printf("Menor (Recursivo): %d\n",ordenaR(imp->prox,imp->prox->chave));
    else if (strcmp(str,"srec") == 0)
        printf("Menor (Iterativo): %d\n",ordenaS(imp->prox,imp->prox->chave));

    while (imp != NULL)
    {
        lista *lixo = imp;
        imp = imp->prox;
        free(lixo);
    }
}

// OPÇÕES PARA CRIAÇÃO DA LISTA SEM CABEÇA

lista *preencheS(lista *cabeca, int n){
    lista *aux = cabeca;
    scanf("%d",&aux->chave);

    int num;
    for(int i=1; i < n; i++)
    {
        scanf("%d",&num);
        lista *celula = malloc(sizeof(lista));
        celula->chave = num;
        celula->prox = NULL;
        adicionat(aux,celula);
    }
    return aux;
}

void imprime_limpS(lista *aux, char *str)
{
    lista *imp = aux;

    printf("Lista s/cabeca\n");
    if (strcmp(str,"crec") == 0)
        printf("Menor (Recursivo): %d\n",ordenaR(imp,imp->chave));
    else if (strcmp(str,"srec") == 0)
        printf("Menor (Iterativo): %d\n",ordenaS(imp,imp->chave));

    while (imp != NULL)
    {
        lista *lixo = imp;
        imp = imp->prox;
        free(lixo);
    }
}

int main()
{
    int n;
    opc *opcao = malloc(sizeof(opc));
    scanf("%d",&n);
    limpabuffer();

    scanf("%s",opcao->op);
    limpabuffer();
    scanf("%s",opcao->rec);

    if (strcmp((opcao->op),"ccabeca") == 0 && ((strcmp(opcao->rec,"crec") == 0) || (strcmp(opcao->rec,"srec") == 0)))
        imprime_limp(preenche(cria(),n),opcao->rec);

    else if (strcmp((opcao->op),"scabeca") == 0 && ((strcmp(opcao->rec,"crec") == 0) || (strcmp(opcao->rec,"srec") == 0)))
        imprime_limpS(preencheS(cria(),n),opcao->rec);

    else
        printf("Nao existe essa combinacao de opcoes!\n");

    free(opcao);
    return 0;
}
