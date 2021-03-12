#include <stdio.h>

/* Programa 1118 URI */

int main()
{

    double nota,deposito=0,dep=0;
    int x=0;

    while (x != 2){

        scanf("%lf",&nota);

        if (nota < 0 || nota > 10)
            printf("nota invalida\n");

        else if (dep < 2){
            deposito += nota;
            dep += 1;

            if (dep == 2){
                    printf("media = %.2f\n",deposito/2);
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d",&x);
                    while(x != 1 && x != 2){
                         printf("novo calculo (1-sim 2-nao)\n");
                         scanf("%d",&x);
                    }

                    dep = 0;
                    deposito = 0;
            }

        }
    }

    return 0;
}
