#include <stdio.h>
#include <stdlib.h>

int magico(int soma, int **matriz, int **ptr, int n)
{
    int somaux = 0,maisum=1,i,j;

    // Linhas (exceto a primeira)
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n; j++)
            somaux += *(*(ptr+i)+j);


        if (somaux == soma)
            maisum++;

        somaux = 0;
    }

    // Colunas
    for(j = 0; j < n; j++)
    {
        somaux = 0;
        for(i = 0; i < n; i++)
            somaux += *(*(ptr+i)+j);

        if (somaux == soma)
            maisum++;
        somaux = 0;
    }

    // Diagonal principal
    for (i=0,j=0; i < n && j < n; i++, j++)
    {
        somaux += *(*(ptr+i)+j);
        if (somaux == soma && (j == n-1) && (i == n-1))
            maisum++;
    }

    // Diagonal secundaria
    somaux = 0;
    for (i=n-1,j=n-1; i >= 0 && j >= 0; i--, j--)
    {

        somaux += *(*(ptr+i)+j);
        if (somaux == soma && (j == 0) && (i == 0))
            maisum++;
    }

    return maisum;
}


int main()
{
    int **matriz,**ptr;
    int n,soma=0,i,j;
    scanf("%d",&n);

    // Alocando memória
    matriz = (int **) malloc( n* sizeof(int*));

    if (matriz == NULL)
        return 0;

    for (i=0,ptr = matriz; i < n; i++,ptr++)
    {
        *ptr = (int *) malloc(n * sizeof(int));
        if (ptr == NULL)
            return 0;
    }
    // Fim da alocação

    // Leitura de dados
    for (i=0; i < n; i++)
    {
        for(j=0; j < n; j++)
            scanf("%d",&matriz[i][j]);
    }
    ptr = matriz;
    // Fim da leitura

    for (i=0; i < n; i++)
        soma += *((*ptr)+i);

    if (magico(soma,matriz,ptr,n) == (n*n)-1)
        printf("Eh quadrado magico\n");
    else
        printf("Nao eh quadrado magico\n");

    return 0;
}
