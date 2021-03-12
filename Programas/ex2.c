#include <stdio.h>
#define MAX 100000

void InsertionR(int V[], int n)
{
  int i = n-2;
  int fim = V[n-1];

  if (n > 1){
    InsertionR(V,n-1);
    for (i = n - 2; i >= 0 && V[i] < fim; i--)
      V[i+1] = V[i];
    V[i+1] = fim;
  }

}

int main()
{
    int V[MAX];
    int n,i=0,k,j=0;

    scanf("%d",&k);
    for (j = 0; j < k; j++){
        scanf("%d",&n);
        for (i=0; i < n; i++)
            scanf("%d",&V[i]);

        InsertionR(V,n);
        for (i=0; i < n; i++)
            printf("%d ",V[i]);
        printf("\n");
    }

    return 0;
}
