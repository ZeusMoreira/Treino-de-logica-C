#include <stdio.h>
#define MAX 100


void dois_maiores(int n, int v[MAX], int *pr, int *seg)
{
    int i,aux,j;
    for (j = 0; j < 2; j++){
        for(i=0;i < n-1;i++){
            if(v[i] > v[i+1]){
                aux = v[i+1];
                v[i+1] = v[i];
                v[i] = aux;
            }
        *pr = v[n-1];
        }
    *seg = v[n-2];
    }
}


void min_max(int n, int v[MAX], int *max, int *min)
{
    int i,aux;

    for(i=0;i < n-1;i++){
        if(v[i] > v[i+1]){
            aux = v[i+1];
            v[i+1] = v[i];
            v[i] = aux;
        }
    *max = v[n-1];
    }

    for(i=n-1;i > 0;i--){
        if(v[i] < v[i-1]){
            aux = v[i-1];
            v[i-1] = v[i];
            v[i] = aux;
        }
    *min = v[0];
    }
}

int main(){

    int v[MAX],n,i=0;
    int max,min,pr,seg;
    scanf("%d",&n);

    for(i=0; i < n; i++)
        scanf("%d",&v[i]);

    dois_maiores(n,v,&pr,&seg);
    min_max(n,v,&max,&min);

    printf("Maior: %d\n",max);
    printf("Menor: %d\n",min);
    printf("Maior: %d\n",pr);
    printf("Segundo maior: %d\n",seg);

    return 0;
}
