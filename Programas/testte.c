#include <stdio.h>
#include <string.h> // Para usar comparação de strings e propriedades da string
#include <stdlib.h> // Para o uso da alocação dinâmica
#include <ctype.h>  // Para verificação de texto digitado
#define MAX 10001
void limpabuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

int primo (int n){

    for(int i=2; i<n; i++){
        if(n==2)
            return 1;
        if (n%i!=0)
            continue;
        else
            return 0;
    }
    return 1;
}

typedef struct ls ls;
typedef struct res res;

struct res{
    int pg;
    int lin;
    int col;
    struct res *prox;
};

struct ls{
    char *string;
    int ocorrencia;
    res *inicio;
    res *fim;
    struct ls *prox;
};

int main(){
    char *texto;
    texto = (char*) malloc(sizeof(char)*MAX);
    scanf("%[^@]",texto);
    limpabuffer();
    int x=1,i=0,counter=0,voto=0,sim=0;
    ls *tab[x];
    ls *nova = malloc(sizeof(ls));
    if (nova == NULL){
        printf("Deu ruim");
        return 0;
    }
    while(primo(x) == 0)
        x++;

    printf("%d\n",x);

    // Criação do tab e cabeça de cada tab
    for (i=0; i < x; i++){
        tab[i] = malloc(sizeof(ls));
        if (tab[i] == NULL){
            printf("Deu ruim");
            return 0;
        }
        tab[i]->prox = NULL;
    }


    for (i=0; i < x; i++){

        scanf("%s",nova->string);
        char *result = strstr(texto,nova->string);

        while(result != NULL){
            voto=0;
            if(!isalpha(*(result-1)))
                voto++;

            counter = 0;
            while (isalpha(*result) || *result == '-') {
                counter++;
                result++;
            }

            if (counter == strlen(nova->string)){
                voto++;
                if (voto == 2)
                    sim++;
            }


            result = strstr(result,nova->string);
        }
        printf("%d\n",sim);
        nova->ocorrencia = sim;
        tab[i]->prox = nova;
        nova->prox = NULL;
    }


    return 0;
}
