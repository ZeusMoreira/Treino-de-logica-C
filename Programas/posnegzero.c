#include <stdio.h>

/* Ex 5.9 pág 66 */

int main(){

    int a;

    scanf("%d",&a);
    if (a > 0)
        printf("%d eh positivo",a);

    else if (a < 0)
        printf("%d eh negativo",a);

    else
        printf("%d eh zero",a);

    return 0;
}
