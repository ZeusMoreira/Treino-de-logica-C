#include <stdio.h>

/* Ex 6.6 pág 70 */

int main(){


    int x,n,i=0,pot=1; /* x = base, n = expoente, i = contador, pot = base ^ expoento */

    scanf("%d", &x);
    scanf("%d", &n);

    while (i < n){     /* Ciclo que calcula a potencia de x ^ n */
        pot = pot * x;
        i++;
    }

    printf("%d",pot);

    return 0;
}
