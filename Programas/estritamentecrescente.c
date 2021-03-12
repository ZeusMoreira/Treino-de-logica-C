#include <stdio.h>
#define MAX 100

void insertion(int n, int v[MAX])
{
    int i,j,x;
    /* Insert-Sort */
    for(i = 1; i < n; i++){
        x = v[i]; /* A nova carta */
        for (j = i-1; j >= 0 && v[j] > x; j--) /* Compara o penultimo elemento com a nova carta , depois o antipenultimo com a nova carta, até j = 0 a magnetude não valer */
            v[j+1] = v[j];  /* Se o penultimo elemento for maior que a nova carta, coloca o penultimo elemento no lugar da carta */
        v[j+1] = x; /* Se j = 0 ou algum elemento ja revelado ser menor que a nova carta, ai coloca a nova carta no lugar correto */
    }
    /* Fim da ordenação */
}

int remover(int n, int v[MAX]){

    int i,j,aux;
    for(i=0; i < n; i++){
        for(j = i+1; j < n;j++){
            if(v[i] == v[j]){
                aux = v[n-1];
                v[n-1] = v[j];
                v[j] = aux;
                n--;
                j--;
            }
        }
    }
    return n;
}

int main()
{
    int v[MAX];
    int n,i;

    scanf("%d",&n);

    for (i = 0; i < n; i++)
        scanf("%d",&v[i]);

    n = remover(n,v);
    insertion(n,v);

    for(i = 0; i < n; i++)
        printf("%d ",v[i]);
    printf("\n");

    return 0;
}
