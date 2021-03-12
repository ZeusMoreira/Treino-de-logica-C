#include <stdio.h>
#define MAX 100

int busca_binaria(int n, int v[MAX], int x)
{
    int esq, dir, meio;

    esq = -1;
    dir = n;

    while (esq < dir - 1) {
        meio = (esq + dir) / 2;
        if (v[meio] < x)
            esq = meio;

        else if(v[meio] == x){
            return n;
        }

        else
            dir = meio;
    }
    return n;
}

int main(){

    int n,v[MAX],x,i=0;
    scanf("%d",&n);
    for (i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }
    scanf("%d",&x);
    printf("%d",busca_binaria(n,v,x));


    return 0;
}
