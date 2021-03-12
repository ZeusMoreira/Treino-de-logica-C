#include <stdio.h>

int main()
{

    int p,divisor,primo;

    scanf("%d",&p);
    divisor = 2;
    primo = 1;

    while (divisor <= p/2 && primo){

        if (! (p % divisor))
            primo = 0;

        else{
            divisor += 1;
        }

    }

    if (primo && p != 1)
        printf("%d eh primo\n",p);

    else
        printf("%d nao eh primo\n",p);

    return 0;
}
