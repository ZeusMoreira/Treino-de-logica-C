#include <stdio.h>
#define MAX 100

int main(){

    int vetor[MAX];
    int i,j,n,aux;
    scanf("%d",&n);

    for(i = 0; i < n; i++)
        scanf("%d",&vetor[i]);


    for(i = n-1; i > 0; i--){
        for (j = 0; j < i; j++){
            if (vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ",vetor[i]);

    printf("\n");


    return 0;
}
