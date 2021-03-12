#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n=0,n1=0;
    struct {
       int dd;
       int mm;
       int aa;
    } inicio, fim;

    scanf("%d/%d/%d",&inicio.dd,&inicio.mm,&inicio.aa);
    scanf("%d/%d/%d",&fim.dd,&fim.mm,&fim.aa);

    if (inicio.mm <= 2)
        inicio.aa--;

    if (inicio.mm <= 2)
        inicio.mm += 13;
    else
        inicio.mm++;

    n = ((1461 * inicio.aa)/4) + ((153 * inicio.mm)/5) + inicio.dd;

    if (fim.mm <= 2)
        fim.aa--;

    if (fim.mm <= 2)
        fim.mm += 13;
    else
        fim.mm++;

    n1 = ((1461 * fim.aa)/4) + ((153 * fim.mm)/5) + fim.dd;

    printf("%d\n",abs(n1-n));
    return 0;
}
