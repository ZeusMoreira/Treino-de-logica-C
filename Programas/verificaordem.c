#include <stdio.h>
#define MAX 100

int verifica_ordem(int n, int v[MAX]) // Função que retorna 1 se o vetor tiver ordenado e 0 caso contrário
{
    int i;
    for (i = 0; i < n-1; i++){
        if(v[i] > v[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    int v[MAX];
    int n,i;    // n = tamanho de v, i = contador

    scanf("%d",&n);

    for (i = 0; i < n; i++) // Leitura do vetor v
        scanf("%d",&v[i]);

    printf("%d",verifica_ordem(n,v));

    return 0;
}
