#include <stdio.h>
#include <string.h>
#define MAX 100

void troca(int i,int j, char V[MAX])
{
    char aux;
    aux = V[i];
    V[i] = V[j];
    V[j] = aux;
}

int separa(int p, int r, char V[MAX])
{
    char x;
    int i,j;
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

void quicksort(int p, int r, char V[MAX])
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
    int n,p=0;
    char V[MAX];
    scanf("%[^\n]",V);
    n = strlen(V);
    quicksort(p,n-1,V);
    printf("%s\n",V);

    return 0;
}

