se#include <stdio.h>

/* Ex 1.5, Apostila 2, pág 6 */

int soma_digitos(int n)
{
    if (n / 10 == 0)
        return n % 10;

    else
        return n % 10 + soma_digitos(n/10);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",soma_digitos(n));
    return 0;
}
