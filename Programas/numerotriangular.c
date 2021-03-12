#include <stdio.h>

/* Ex 7.7 pág 79 */

int main()
{

    int n,i=1,op = 0,aux=0;

    scanf("%d",&n);
    while (i < n/2){

            op = i * (i + 1) * (i + 2);
            if (op == n)
                    aux = 1;
            i++;
    }

    if (aux == 1)
        printf("%d eh triangular\n",n);
    else
        printf("%d nao eh triangular\n",n);

    return 0;
}
