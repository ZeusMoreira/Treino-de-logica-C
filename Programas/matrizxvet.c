#include <stdio.h>
#include <stdlib.h>

int main()
{
    float **matriz,**ptr,*vet,*resp;
    int m,n,i,j;
    scanf("%d %d",&m,&n);

    // Alocando memória
    resp = (float *) malloc((n-1) * sizeof(float) );
    vet = (float *) malloc(n * sizeof(float));
    matriz = (float **) malloc(m * sizeof(float*));

    if (matriz == NULL || vet == NULL || resp = NULL)
        return 0;

    for (i=0,ptr = matriz; i < m; i++,ptr++)
    {
        *ptr = (float *) malloc(n * sizeof(float));
        if (ptr == NULL)
            return 0;
    }
    // Fim da alocação

    // Leitura de dados
    for (i=0; i < m; i++)
    {
        for(j=0; j < n; j++)
            scanf("%f",&matriz[i][j]);
    }
    ptr = matriz;

    for (i=0; i < n; i++)
        scanf("%f",(vet+i));
    // Fim da leitura


    // Desenvolvimento
    for (i=0; i < n-1; i++)
    {
        for(j=0; j < n; j++)
            *(resp+i) += *(vet+j) * (*(*(ptr+i)+j));

    }
    // Fim do desenvolvimento

    for (i=0; i < n-1; i++)
        printf("%f ",*(resp+i));

    return 0;
}
