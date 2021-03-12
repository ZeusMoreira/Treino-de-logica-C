#include <stdio.h>

/* Ex 7.8 pág 79 */

int main()
{
    int num,div,quo,rest;
    scanf("%d %d",&num,&div);
    int print=num,print2=div;

    while (rest != 0){
        quo = num / div;
        rest = num % div;

        if (rest == 0)
            printf("MDC(%d,%d) = %d\n",print,print2,div);
        else{
            num = div;
            div = rest;
        }
    }
    return 0;
}
