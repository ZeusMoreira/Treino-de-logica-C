#include <stdio.h>
#define MAX 100

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


int main()
{
    int n,i=0,p=0;
    int V[MAX];
    scanf("%d",&n);

    for (i = 0; i < n; i++)
        scanf("%d",&V[i]);

    quicksort(p,n-1,V);

    for (i = 0; i < n; i++)
        printf("%d ",V[i]);

    return 0;
}
