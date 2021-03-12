#include <stdio.h>

/* Ex 6.5 pág 70 */

int main(){

    int n,cont = 0, potencia=1;

    scanf("%d",&n);
    while (cont < n){

        if (cont < n - 1)
            printf("%d,",potencia);

        else
            printf("%d.\n",potencia);

        potencia = potencia * 2;
        cont ++;
    }

    return 0;
}
