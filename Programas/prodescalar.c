#include <stdio.h>
#include <stdlib.h>

int prod_escalar(int n,int *x, int *y)
{
    int i;
    int prodesc=0;

    for (i=0; i < n; i++)
        prodesc = prodesc + ((*(x+i)) * (*(y+i)));

    return prodesc;
}

int main()
{
    int *x,*y,n,i=0;
    scanf("%d",&n);
    x = (int *) malloc(n * sizeof(int));
    y = (int *) malloc(n * sizeof(int));

    if (x != NULL && y != NULL)
    {
        for (i=0; i < n; i++){
            printf("(x%d,y%d): ",(i+1),(i+1));
            scanf("%d %d",(x+i), (y+i));
        }
        printf("Produto escalar = %d\n",prod_escalar(n,x,y));
    }

    else
        printf("Deu pra alocar nao manin\n");

    return 0;
}
