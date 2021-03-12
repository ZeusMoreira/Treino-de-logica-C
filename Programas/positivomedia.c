#include <stdio.h>

/* Programa 1064 URI */

int main()
{

    int i=0,n = 6,pos=0;
    double num,media=0;

    while (i < n){
        scanf("%lf",&num);
        if (num > 0){
            pos++;
            media += num;
        }
        i++;
    }

    printf("%d valores positivos\n",pos);
    printf("%.1f\n",media/pos);

    return 0;
}
