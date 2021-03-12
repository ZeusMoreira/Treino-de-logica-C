#include <stdio.h>
#define DIM 100
#define typeof(var) _Generic( (var),\
char: "Char",\
int: "Integer",\
float: "Float",\
char *: "String",\
void *: "Pointer",\
default: "Undefined")

int soma_matriz(int n,const int A[DIM][DIM])
{
    int const *p;
    int soma=0;

    for(p = &A[0][0]; p < &A[n][n]; p++)
        soma = soma + (*p);


    return soma;
}

int main()
{
    int A[DIM][DIM];

    int n,i,j,soma;


    scanf("%d",&n);
    for (i=0; i < n; i++)
    {
        for(j=0; j < n; j++){
            scanf("%d",&A[i][j]);
        }
    }


    soma = soma_matriz(n,A);

    printf("Soma = %d\n",soma);

    return 0;
}
