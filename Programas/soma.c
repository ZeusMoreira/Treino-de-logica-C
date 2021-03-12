#include <stdio.h>
#include <stdlib.h>

int soma(int (*f)(int),int inicio, int fim)
{
    int k,soma=0;

    for (k=inicio; k <= fim; k++)
        soma = (*f)(k);

    return soma;
}

int g(k){
    ;
    ;
    ;
}

int main()
{

    int i,j;
    scanf("%d %d",&i,&j);

    printf("%d\n",soma(g,i,j));

    return 0;
}
