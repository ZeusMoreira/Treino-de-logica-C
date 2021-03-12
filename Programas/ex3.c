#include <stdio.h>
#define MAX 10000

int inverte(int V[], int n){

    int i,j,inv=0;
    for (i=0; i < n-1; i++){

        for (j = i + 1; j < n; j++){
            if(V[i] > V[j])
                inv++;
        }

    }
    return inv;
}

int main(){

    int V[MAX];
    int n,i=0,k,j=0;

    scanf("%d",&k);
    for(j=0; j < k; j++){
        scanf("%d",&n);
        for (i = 0; i < n; i++)
            scanf("%d",&V[i]);

        printf("%d\n",inverte(V,n));
    }

    return 0;
}
