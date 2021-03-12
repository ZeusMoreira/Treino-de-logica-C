#include <stdio.h>

/* Ex 6.9 pág 70 */

int main(){

    int n,pares=0,impares=0,i=0,num;
    scanf("%d",&n);

    while (i < n){
        scanf("%d",&num);
        if (num % 2 == 0)
            pares += num;
        else
            impares += num;
        i++;
    }

    printf("Quantidade de pares: %d\n",pares);
    printf("Quantidade de impares: %d\n",impares);

    return 0;
}
