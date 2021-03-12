#include <stdio.h>

/* Ex 6.14 pág 71 */

int main(){

    int n,maior=0,menor=0,nota,i=0;
    scanf("%d",&n);

    while (i < n){

        scanf("%d",&nota);
        if (i == 0){
            maior = nota;
            menor = nota;
        }else if (i > 0 && nota > maior)
            maior = nota;
         else if (i > 0 && nota < menor)
            menor = nota;

        i++;
    }

    printf("Menor nota: %d\n",menor);
    printf("Maior nota: %d\n",maior);

    return 0;
}
