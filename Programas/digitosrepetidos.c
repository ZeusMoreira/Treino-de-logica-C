#include <stdio.h>

/* Ex 7.4 pág 79 */

int main()
{

    unsigned long int num,cont=0,dig,veri=0;

    scanf("%d",&num);
    while (num % 10 != 0){

        dig = num % 10;
        num = num / 10;

        if (dig == (num % 10)){
            cont += 1;
            if (cont == 1)
                veri++;
                cont = 0;
        }
    }

    if (veri > 0)
        printf("A sequencia tem 2 numeros seguidos %lu vezes\n",veri);
    else
        printf("Nao ha digitos seguidos");

    return 0;
}
