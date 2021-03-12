#include <stdio.h>

/* Ex 7.5 pág 79 */

int main()
{

    int num,dig;

    scanf("%d",&num);
    dig = num % 10;

    while ( num / 10 != 0){
        num = num / 10;
    }

    if (num == dig)
        printf("Primeiro igual ao ultimo digito\n");
    else
        printf("Primeiro diferente do ultimo digito\n");

    return 0;
}
