#include <stdio.h>

/* Ex 5.8 pág 66 */

int main(){

    int num;

    scanf("%d",&num);
    if (num % 2 == 0)
        printf("%d eh par",num);
    else
        printf("%d eh impar",num);

    return 0;
}

/* 7ª linha: Alocação da memória para variavel int num */
/* 9ª linha: Leitura e atribuição do valor para variável num */
/* 10ª linha: Confirmação do if */
/* 11ª linha: Caso o if seja verdadeiro a saida padrão será: "num eh par" */
/* 13ª linha: Caso o if seja falso entrará no bloco else e a saida padrão será: "num eh impar" */
