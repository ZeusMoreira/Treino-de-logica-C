#include <stdio.h>
#define MAX 100

void selection(int n, int v[MAX])
{
    int i,j,min,aux;

    /* Select-Sort */
    for(i=0; i < n-1; i++){
        min = i; /* Definição do minimo da vez */

        for (j=i+1; j < n; j++){ /* Ciclo que determina qual é o minimo de toda a sequencia */
            if (v[j] < v[min])
                min = j;
        }
        /* Colocando o menor valor na primeira (segunda, terceira....) posição do vetor */
        aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }
    /* Fim da ordenação */
}

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

int main()
{
    int v[MAX];
    int n,i;

    scanf("%d",&n);

    for (i = 0; i < n; i++)
        scanf("%d",&v[i]);

    insertion(n,v);

     for(i = 0; i < n; i++)
        printf("%d ",v[i]);
    printf("\n");

    return 0;
}
