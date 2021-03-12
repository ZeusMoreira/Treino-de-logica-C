#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 61


typedef struct camisa camisa;

struct camisa
{
    char nome[MAX];
    char cor[MAX];
    char tamanho;
};

void limpabuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void bubblesort(camisa info[MAX],int n)
{
    int i,j;
    camisa aux;
    for (i=n-1; i > 0; i--){
        for(j=0; j < i;j++){

            if (strcmp(info[j].cor,info[j+1].cor) == 0)
            {

                if (info[j].tamanho < info[j+1].tamanho)
                {
                    aux = info[j];
                    info[j] = info[j+1];
                    info[j+1] = aux;
                }

                else if (info[j].tamanho == info[j+1].tamanho)
                {

                    if (strcmp(info[j].nome,info[j+1].nome) > 0)
                    {
                        aux = info[j];
                        info[j] = info[j+1];
                        info[j+1] = aux;
                    }
                }
            }

            else if (strcmp(info[j].cor,info[j+1].cor) > 0)
            {
                aux = info[j];
                info[j] = info[j+1];
                info[j+1] = aux;
            }

        }
    }
}


int main()
{
    camisa info[MAX];
    int n=0,i=0;

    scanf("%d",&n);
    while (n != 0)
    {
        for (i=0; i < n; i++){
            limpabuffer();
            scanf("%[^\n]",info[i].nome);
            limpabuffer();
            scanf("%s %c",info[i].cor,&info[i].tamanho);

        }
        bubblesort(info,n);
        for (i=0; i < n; i++)
            printf("%s %c %s\n",info[i].cor,info[i].tamanho,info[i].nome);

        scanf("%d",&n);
        if (n != 0)
            printf("\n");

    }

    return 0;
}
