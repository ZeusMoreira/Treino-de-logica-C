#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,D;
    struct {
        int dd;
        int mm;
        int aa;
    } data;

    scanf("%d/%d/%d",&data.dd,&data.mm,&data.aa);

    if (data.mm <= 2)
        data.aa--;

    if (data.mm <= 2)
        data.mm += 13;
    else
        data.mm++;

    n = ((1461 * data.aa)/4) + ((153 * data.mm)/5) + data.dd;
    D = (n-621049) % 7;


    printf("Dia da semana: %d\n",D);

    return 0;
}
