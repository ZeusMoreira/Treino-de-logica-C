#include <stdio.h>
#define MAX 100


void intercala(int p, int q, int r, int v[MAX])
{
    int i, j, k, w[MAX];
    i = p;
    j = q;
    k = 0;

    /* Ordenação de uma parcela dos vetores separados pelo merge*/

    while (i < q && j < r) {
        if (v[i] < v[j]) {
            w[k] = v[i];
            i++;
        }
        else {
            w[k] = v[j];
            j++;
        }
        k++;
    }


    /* Caso sobre algum elemento da ordenação menor que todos ja ordenados */

    while (i < q) {
        w[k] = v[i];
        i++;
        k++;
    }

    /* Caso sobre o algum elemento da ordenação maior que todos ja ordenado */
    while (j < r) {
        w[k] = v[j];
        j++;
        k++;
    }

    /* Passa o vetor W ordenado para o vetor V original */
    for (i = p; i < r; i++)
        v[i] = w[i-p];
}



void mergesort(int p, int r, int v[MAX])
{
    int q;
    if (p < r - 1) {
        q = (p + r) / 2;
        printf("p = %d e q = %d e r = %d\n",p,q,r);
        mergesort(p, q, v);
        mergesort(q, r, v);
        intercala(p, q, r, v);

    }
}



int main()
{
    int v[MAX];
    int r,i,p=0;

    scanf("%d",&r);

    for (i = 0; i < r; i++)
        scanf("%d",&v[i]);

    mergesort(p,r,v);


    return 0;
}
