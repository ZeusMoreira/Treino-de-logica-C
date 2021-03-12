#include <stdio.h>
#define MAX 100


int main()
{
    int n,i=0;
    char V[MAX];
    scanf("%d",&n);

    for (i = 0; i < n; i++)
        scanf("%c",&V[i]);

    if ( V[0] < V[1]){
        printf("cu\n");
    }

    else
        printf("rabo\n");


    return 0;
}
