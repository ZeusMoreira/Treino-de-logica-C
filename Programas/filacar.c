#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct fila fila;

struct fila{
    int S,N,qntd;
    int dados[MAX];
};

void limpabuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}


fila *criafila()
{
    fila *fi = malloc(sizeof(fila));
    if (fi == NULL)
        return 0;

    if (fi != NULL)
    {
        fi->S = 0;
        fi->N = 0;
        fi->qntd = 0;
    }
    return fi;
}

int ficheia(fila *fi)
{
    if (fi->qntd == MAX)
        return 1;
    else
        return 0;
}

int enfileira(fila *fi,int s)
{
    if (ficheia(fi)){
        printf("\nImpossivel, nao ha vagas!\n");
        return 0;
    }
    printf("\nHa vagas!\n");
    fi->dados[fi->S] = s;
    fi->S = (fi->S+1);
    fi->qntd++;
    printf("O carro de placa %d acabou de entrar!\n",s);
    return 1;
}

int retira(fila *fi,int s)
{
    if (fi->qntd == 0)
    {
        printf("Nao ha mais carros na fila!\n");
        return -1;
    }

    int i=0;
    fila *aux = fi;

    while (aux->dados[i] != s)
        i = i + 1;

    return i;
}


void compensa(fila *fi,int y,int s)
{
    printf("Carro de placa %d se moveu %d vezes dentro da garagem!\n",s,y+1);

    while (fi->dados[y] != fi->dados[fi->S])
    {
        fi->dados[y] = fi->dados[y+1];
        y = y+1;
    }
    fi->qntd--;
    fi->S--;
    printf("O carro de placa %d acabou de sair!\n",s);
}

void imprim(fila *fi)
{
    fila *aux = fi;
    int i = 0;
    while (i < aux->qntd)
    {
        printf("%d ",fi->dados[i]);
        i++;
    }
    printf("\n\n");
}


int main()
{
    int s,x,aux;
    char c;
    char op[4];
    fila *fi = criafila();

    printf("Digite o comando (E = Entrada e S = Saida):\n");
    scanf("%c",&c);
    printf("Digite o numero da placa do carro:\n");
    scanf("%d",&s);

    while (c != '@' )
    {

        if (c == 'E')
        {
            x = enfileira(fi,s);
            if (x == 0){
                printf("Deseja esperar ?\n\n");
                limpabuffer();
                scanf("%s",op);

                if (strcmp(op,"Sim") == 0)
                {
                    limpabuffer();
                    while(c != 'S')
                    {
                        printf("Digite o comando (E = Entrada e S = Saida):\n");
                        scanf("%c",&c);
                    }
                    aux = s;
                    scanf("%d",&s);
                    limpabuffer();
                    x = retira(fi,s);
                    compensa(fi,x,s);
                    x = enfileira(fi,aux);
                }
                else if (strcmp(op,"Nao") == 0)
                    printf("O carro de placa %d foi embora e se moveu 0 vezes na garagem\n",s);
            }
        }
        else if (c == 'S')
        {
            x = retira(fi,s);
            if (x != -1)
                compensa(fi,x,s);
        }
        imprim(fi);
        limpabuffer();
        printf("Digite o comando (E = Entrada e S = Saida):\n");
        scanf("%c",&c);
        printf("Digite o numero da placa do carro:\n");
        scanf("%d",&s);
    }
    imprim(fi);
    return 0;
}
