#include <stdio.h>

/* Ex 1.6, Apostila 2, pág 6 */

int Fib(int i){

    if (i <= 2)
        return 1;
    else
        return Fib(i-1) + Fib(i-2);
}

int main()
{
    int i;
    scanf("%d",&i);
    printf("%d\n",Fib(i));
    return 0;
}
