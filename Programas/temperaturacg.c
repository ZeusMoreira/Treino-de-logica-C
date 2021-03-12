#include <stdio.h>

/* Ex 6.10 pág 71 */

int main(){

    int i=0,soma=0,temperatura;

    while (i < 31){

        scanf("%d",&temperatura);
        if (temperatura < 0)
            soma++;
        i++;
    }

    printf("Quantidade de dias com temperatura abaixo de 0 graus Celsius: %d\n",soma);

    return 0;
}
