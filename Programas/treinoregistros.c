#include <stdio.h>

// Treinando o uso do registro

int main()
{
    struct {
        int a;
        int b;
        int sum;

    }soma;

    scanf("%d %d",&soma.a, &soma.b);
    soma.sum = soma.a + soma.b;
    printf("A soma de %d e %d eh %d\n",soma.a,soma.b,soma.sum);

    return 0;
}
