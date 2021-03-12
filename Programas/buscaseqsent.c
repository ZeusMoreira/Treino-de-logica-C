#include <stdio.h>
#define MAX 101


/* Exercicio 4.1, pág 33, Apostila 2 */


int busca_sequencial_sentinela(int n, int v[MAX+1], int x){

    int k;
    v[n] = x;

    for (k = 0; v[k] != x; k++)
    ;

    if (k == n)
        return n;
    else
        return k;

}

int main(){

    int n,v[MAX],x,i=0;
    scanf("%d",&n);
    for (i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }
    scanf("%d",&x);
    printf("%d",busca_sequencial_sentinela(n,v,x));

    return 0;
}
