#include <stdio.h>

/* Ex 7.2 pág 79 */

int main()
{

    int n,i=0,aux,num,fora = 0;

    scanf("%d",&n);
    while (i < n){

            scanf("%d",&num);
            if (i == 0)
                aux = num;

            else if ( i > 0 && num > aux)
                aux = num;

            else if ( i > 0 && num < aux)
                fora = 1;

            i++;
    }

    if (fora == 1)
        printf("Sequencia n esta crescente\n");

    else
        printf("Sequencia esta crescente\n");

    return 0;
}
