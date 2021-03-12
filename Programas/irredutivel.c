#include <stdio.h>

/* Ex 7.9 pág 79/80 */

int main()
{
    int a,b,div;
    scanf("%d %d",&a,&b);

    if (a > b)
        div = b;
    else
        div = a;

    while (a % div != 0 || b % div != 0){
        div--;
    }

    printf("%d/%d",a/div,b/div);

    return 0;
}
