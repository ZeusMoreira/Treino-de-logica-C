#include <stdio.h>
#include <stdlib.h>


void troca(int i,int j,int *V)
{
    int aux;
    aux = *(V+i);
    *(V+i) = *(V+j);
    *(V+j) = aux;
}

int separa(int p, int r, int *V)
{
    int *x,i,j;
    x = (V+p);
    i = p;
    j = r;

    while (1)
    {
        while(*(V+j) > *x)
            j--;
        while(*(V+i) < *x)
            i--;

        if (i < j){
            troca(i, j, V);
        }

        else
            return j;
        j--;
        i++;
    }
}

void quicksort(int p, int r, int *V)
{
    int q;
    if (p < r){
       q = separa(p,r,V);
       quicksort(p,q,V);
       quicksort(q+1,r,V);
    }
}


int soma_balanceada(int n, int *V)
{
    int i=0,somacerta=0,correto=1,soma=0;
    somacerta = *(V+i) + *(V+(n-1)-i);

    for(i=1; i < (n/2); i++){
        soma = *(V+i) + *(V+n-1-i);
        if (soma == somacerta)
            correto++;
    }

    if (correto == (n/2))
        return 1;
    else
        return -1;
}

int main()
{
    int *V,n,i=0,p=0;
    scanf("%d",&n);

    V = (int *) malloc(n * sizeof(int));

    if (V != NULL){
        for (i=0; i < n; i++)
            scanf("%d",(V+i));

        quicksort(p,n-1,V);

        if (soma_balanceada(n,V) == 1)
            printf("A sequencia eh balanceada\n");
        else
            printf("A sequencia nao eh balanceada\n");
    }

    else
        printf("Num vai dar nao\n");

    return 0;
}
