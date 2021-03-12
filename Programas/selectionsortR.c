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

int selectionR(int n, int v[MAX]){

    if (n == 1)
        return 0;

    else{
        int max,j,aux;
        max = n-1;
        for (j = n-2; j >= 0; j--){
            if (v[j] > v[max])
                max = j;
        }
        aux = v[n-1];
        v[n-1] = v[max];
        v[max] = aux;
        return selectionR(n-1,v);
    }
}

int main()
{
    int v[MAX];
    int n,i;

    scanf("%d",&n);

    for (i = 0; i < n; i++)
        scanf("%d",&v[i]);

    selectionR(n,v);

    for (i = 0; i < n; i++)
        printf("%d ",v[i]);

    return 0;
}
