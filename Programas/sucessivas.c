#include <stdio.h>
#define MAX 100

void trocas_sucessivas(int n, int v[MAX])
{
    int i,j,aux;
    for(i = n-1; i > 0;i--){
        for (j = 0; j < i; j++){
            if(v[j] > v[j+1]){
                aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
        }
    }

}

int trocas_sucessivasR(int n, int v[MAX])
{

    if (n == 0)
      return 0;

    else{
        int aux,j;
        for (j = 0; j < n-1; j++){
            if (v[j] > v[j+1]){
                aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
        }
        return trocas_sucessivasR(n-1,v);
    }
}

int main()
{
    int v[MAX];
    int n,i;

    scanf("%d",&n);

    for (i = 0; i < n; i++)
        scanf("%d",&v[i]);

    trocas_sucessivasR(n,v);

    for (i = 0; i < n; i++)
        printf("%d ",v[i]);


    return 0;
}
