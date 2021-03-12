#include <stdio.h>
#define MAX 100

int insere(int n, int v[MAX], int k, int y){

    int i,aux;
    for(i = k; i < n;i++){
        aux = v[i]
        if (i == k)
            v[i] = y;

    }
    return n+1;
}

int inseree(int n, int v[MAX], int k, int y){

    int i = n;
    if (n == k){
        v[n] = y;
        return ;
    }

    else{
        v[n] = v[n-1];
        return inseree(n-1,v,k,y);
    }
}





int main(){

    int n,v[MAX],k,y,i=0;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        scanf("%d",&v[i]);

    scanf("%d",&k);
    scanf("%d",&y);
    printf("%d",inseree(n,v,k,y));



    return 0;
}

