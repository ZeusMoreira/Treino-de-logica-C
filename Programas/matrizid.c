#include <stdio.h>
#define LINHA 100
#define COLUNA 100

void id(int A[LINHA][COLUNA],int dim1,int dim2)
{
    int (*p)[COLUNA],j=0;

    for(p = A; p <= A + dim1*dim2; p++){
       (*p)[j]= 0;
       if (p == A + dim1*dim2)
            j++;
    }

    j = 0;
    for(p = A; p < A + dim1*dim2; p++,j++)
        (*p)[j]= 1;

}

int main()
{
    int A[LINHA][COLUNA];
    int dim1,dim2,i,j;
    scanf("%d %d",&dim1,&dim2);
    id(A,dim1,dim2);

    for (i = 0; i < dim1; i++){
        for(j = 0; j < dim1; j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    return 0;
}
