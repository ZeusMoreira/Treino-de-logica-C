#include <stdio.h>

/* Ex 6.13 pág 71 */

int main(){

    int qntdiscos,i=0,maior,dia;

    while (i < 30){
        scanf("%d",&qntdiscos);
        if (i == 0){
            maior = qntdiscos;
            dia = i+1;
        }
        else if( i > 0 && qntdiscos > maior){
            maior = qntdiscos;
            dia = i+1;
        }
        i++;
    }

    printf("Dia: %d\n",dia);
    printf("Qntd: %d\n",maior);



    return 0;
}
