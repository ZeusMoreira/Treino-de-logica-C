#include <stdio.h>

/* Ex 5.8 p�g 66 */

int main(){

    int num;

    scanf("%d",&num);
    if (num % 2 == 0)
        printf("%d eh par",num);
    else
        printf("%d eh impar",num);

    return 0;
}

/* 7� linha: Aloca��o da mem�ria para variavel int num */
/* 9� linha: Leitura e atribui��o do valor para vari�vel num */
/* 10� linha: Confirma��o do if */
/* 11� linha: Caso o if seja verdadeiro a saida padr�o ser�: "num eh par" */
/* 13� linha: Caso o if seja falso entrar� no bloco else e a saida padr�o ser�: "num eh impar" */
