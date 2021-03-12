#include <stdio.h>

/* Ex 7.3 pág 79 */

int main(){

    int num,dig,cont=0,aux;

    scanf("%d",&num);
    scanf("%d",&dig);
    aux = num;
    while (num % 10 != 0){
        printf("%d\n",num);
        if (num % 10 == dig)
            cont += 1;
        num = num / 10;

    }

    printf("O digito %d ocorre %d vez(es) no numero %d.\n",dig,cont,aux);

    return 0;
}
