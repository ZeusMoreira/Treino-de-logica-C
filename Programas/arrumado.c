#include <stdio.h>
#define MAX 100

int arrumado(int p, int n, int V[MAX]){

    int i;
    for(i=0; i < n;i++){

        /* Caso eles sejam iguais devemos analisar o prox elemento */
        if (i == p)
            i++;

        if ((i < p && V[i] > V[p]) || (i > p && V[i] < V[p])){
            i = -1;
            p++;
        }

        /* Caso exista p que satisfaça v[0..p-1] <= v[p] < v[p+1...n-1] */
        if (i == n-1)
            return p;

    }
    return -1;
}


int main()
{
    int n,i=0,p=0,t;
    int V[MAX];
    scanf("%d",&n);

    for (i = 0; i < n; i++)
        scanf("%d",&V[i]);

    t = arrumado(p,n,V);
    printf("%d\n",t);

    return 0;
}
