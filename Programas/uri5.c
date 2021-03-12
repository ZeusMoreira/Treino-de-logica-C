#include <stdio.h>
#include <stdlib.h>
#define MAX 10000


void troca(int i,int j,int V[MAX])
{
    int aux;
    aux = V[i];
    V[i] = V[j];
    V[j] = aux;
}

int separa(int p, int r, int V[MAX])
{
    int x,i,j;
    x = V[p];
    i = p;
    j = r;

    while (1)
    {
        while(V[j] > x)
            j--;
        while(V[i] < x)
            i++;

        if (i < j){
            troca(i, j, V);
        }

        else
            return j;
        j--;
        i++;
    }
}

void quicksort(int p, int r, int V[MAX])
{
    int q;
    if (p < r){
       q = separa(p,r,V);
       quicksort(p,q,V);
       quicksort(q+1,r,V);
    }
}


int main(){

    int maxdias;

    while ((scanf("%d",&maxdias) != EOF)){

        int *p,v[maxdias],soma[MAX],i,j,k,custo,q=0;
        scanf("%d",&custo);
        k = maxdias;
        for(i=0; i < maxdias; i++)
            scanf("%d",&v[i]);

        p = v;
        for(i=0; i < maxdias; i++)
        {
            soma[q] = 0;
            k = maxdias;
            for (p = v + i,j=i; p < v+k; p++,j++)
            {
                soma[q] += *p;
                if (j == k-1 && k > i)
                {
                    soma[q] = soma[q] - ((k-i) * custo);
                    k--;
                    q++;
                    soma[q] = 0;
                    p = v+i-1;
                    j = i-1;
                }
            }
        }
        k=0;
        quicksort(k,q-1,soma);

        if (soma[q-1] < 0)
            printf("0\n");
        else
            printf("%d\n",soma[q-1]);

    }

    return 0;
}
