#include <stdio.h>

/* Ex 5.7 p�g 66 */

int main(){

    int i,j,m;

    scanf("%d %d",&i,&j);
    m = i + j - (i % j);
    printf("%d",m);


    return 0;
}

/* 7� linha: Aloca��o de espa�o na mem�ria para 3 variaveis do tipo int i,j,m*/
/* 9� linha: Leitura das variaveis e prenchimento dos espa�os */
/* 10� linha: O slot de memoria da variavel m recebe o valor da opera��o */
/* 11� linha: Mostra na saida padr�o o valor de m */
