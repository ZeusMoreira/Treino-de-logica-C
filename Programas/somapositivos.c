#include <stdio.h>

/* Ex 6.8 pág 70 */

int main(){

    int n,num,i=0,soma=0;
    scanf("%d",&n);

    while (i < n){
        scanf("%d",&num);
        if (num > 0)
            soma += num;
        i++;
    }

    printf("%d",soma);

    return 0;
}
