#include <stdio.h>
#define MAX 101

/* Exercicio 4.4, Pág 34, Apostila 2 */

int buscaR2(int n, int v[MAX], int x)
{
    if (v[n-1] == x)
        return 1;
    else
        return buscaR2(n-1, v, x);
}


int main(){

    int n,v[MAX],x,i=0;
        scanf("%d",&n);

    for (i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }

    scanf("%d",&x);
    printf("%d",buscaR2(n,v,x));


    return 0;
}
