#include <stdio.h>

/* Ex 7.6 p�g 79 */

int main()
{

    int n,i,j,cont=0,num = 0;

    scanf("%d %d %d",&n,&i,&j);
    while(cont < n){
        if (num % i == 0 || num % j == 0){
            printf("%d ",num);
            cont++;
        }
        num += 1;
    }
    return 0;
}
