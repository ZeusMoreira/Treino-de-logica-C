#include <stdio.h>
#define MAX 100

int *maximo(int n, int v[MAX])
{
    int i,aux;
    int *q = &v[0];

    for(i=0; i < n-1; i++){
        if(v[i] > v[i+1])
        {
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
        }
        else
            q = &v[i+1];

    }
    return q;
}

int main()
{
    int n,v[MAX],i=0;
    scanf("%d",&n);

    for (i=0;i < n;i++)
        scanf("%d",&v[i]);

    printf("%d\n",(maximo(n,v)));
    return 0;
}

