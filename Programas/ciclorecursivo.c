#include <stdio.h>

/* Ex 1.8, Apostila 2, pág 7 */

int ciclo(int n) /* Não recursivo */
{
    int tam = 1;
    while (n > 1){

        if (n % 2 == 0)
            n = n / 2;
        else
            n = (n * 3) + 1;

        tam += 1;
    }

    return tam;
}

int cicloR(int n) /* Recursivo */
{
    if (n == 1)
        return 1;

    else {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = (n * 3) + 1;
        return 1 + cicloR(n);
    }
}

int main() /* Main */
{
    int n;
    scanf("%d",&n);
    printf("%d\n",ciclo(n));
    printf("%d\n",cicloR(n));

}
