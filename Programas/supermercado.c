#include <stdio.h>
#include <string.h>
#define MAX 50

struct produto{
    int codigo;
    char descricao[MAX+1];
    double preco;
};

void limpabuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}


void bubblesort(struct produto mercadoria[3])
{
    int i,j,k=0;
    char aux[MAX];
    for (i=2; i > 0; i--){
        for(j=0; j < i;j++){

            if (mercadoria[j].descricao[k] == mercadoria[j+1].descricao[k])
            {
                while (mercadoria[j].descricao[k] == mercadoria[j+1].descricao[k])
                    k++;
            }


            if (mercadoria[j].descricao[k] > mercadoria[j+1].descricao[k])
            {
                k=0;
                strcpy(aux, mercadoria[j].descricao);
                strcpy(mercadoria[j].descricao, mercadoria[j+1].descricao);
                strcpy(mercadoria[j+1].descricao,aux);
            }

        }
    }
}


int main(){

    int i;
    struct produto mercadoria[3];

    for (i = 0; i < 3; i++){
        scanf("%d %[^\n] %lf",&mercadoria[i].codigo, mercadoria[i].descricao, &mercadoria[i].preco);
        limpabuffer();
    }

    bubblesort(mercadoria);
    for (i = 0; i < 3; i++)
        printf("%s\n",mercadoria[i].descricao);

    return 0;
}
