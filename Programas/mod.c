#include <stdio.h>

/* Ex 5.7 pág 66 */

int main(){

    int i,j,m;

    scanf("%d %d",&i,&j);
    m = i + j - (i % j);
    printf("%d",m);


    return 0;
}

/* 7ª linha: Alocação de espaço na memória para 3 variaveis do tipo int i,j,m*/
/* 9ª linha: Leitura das variaveis e prenchimento dos espaços */
/* 10ª linha: O slot de memoria da variavel m recebe o valor da operação */
/* 11ª linha: Mostra na saida padrão o valor de m */
