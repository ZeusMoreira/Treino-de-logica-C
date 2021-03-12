#include <stdio.h>
#define MAX 100

/* Exercicio 4.5 , pág 34 Apostila 2 */

void remover(int n, int v[MAX],int x){
    for (x = x; x < n-1; x++)
        v[x] = v[x+1];

}

int removeR(int n, int v[MAX], int x){

    if (v[x] == v[n])
        return n - 1;

    else{
        v[x] = v[x+1];
        return removeR(n,v,x+1);
    }
}

int main(){

    int n,v[MAX],x,i=0;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        scanf("%d",&v[i]);

    scanf("%d",&x);
    for (i = 0; i < n-1; i++)
        printf("%d ",v[i]);

    return 0;
}
