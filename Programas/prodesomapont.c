#include <stdio.h>
#define MAX 100

void soma_prod(int a, int b, int *soma, int *prod)
{
    *soma = a + b;
    *prod = a * b;
}

int main()
{
    int x,y,n,i=0,maiorprod=0,maiorsoma=0;
    int soma,prod;
    int v[MAX];

    scanf("%d %d %d",&x,&y,&n);
    soma_prod(x,y,&soma,&prod);

    for (i=0; i < n; i++){
        scanf("%d",&v[i]);
        if (v[i] > soma)
            maiorsoma++;
        if (v[i] > prod)
            maiorprod++;
    }

    printf("Maiores que a soma: %d\nMaiores do que o produto: %d\n",maiorsoma,maiorprod);

    return 0;
}
