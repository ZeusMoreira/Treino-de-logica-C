#include <stdio.h>

/* Ex 6.12 pág 71 */

int main(){

    int n,pares=0,impar=0,i=0,num;
    scanf("%d",&n);

    while (i < n){
        scanf("%d",&num);
        if (num % 2 == 0)
            pares++;
        else
            impar++;
        i++;
    }

    printf("Qntd de numeros pares: %d\n",pares);
    printf("Qntd de numeros impares: %d\n",impar);

    return 0;
}
