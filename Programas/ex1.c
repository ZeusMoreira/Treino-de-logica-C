#include <stdio.h>

void fg(int n)
{
    int i=0;
    int vet[n] = {2,1} ,vet1[n] = {1,2};

    for (i=2; i < n; i++){
        vet[i] = 2 * vet[i-1] + vet1[i-2];
        vet1[i] =  vet1[i-1] + 3 * vet[i-2];
    }
    i = n-1;

    printf("F(%d) = %d\n",n,vet[i]);
    printf("G(%d) = %d\n",n,vet1[i]);
}

int main()
{
    int n,k,i;
    scanf("%d",&k);
    for (i=0;i < k; i++){
        scanf("%d",&n);
        fg(n);
    }

    return 0;
}
