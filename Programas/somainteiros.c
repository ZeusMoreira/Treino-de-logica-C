#include <stdio.h>

/* Ex 6.7 pág 70 */

int main(){

    int n,i=0,soma=0,num;   /* n = qntd de numeros da sequencia, i = contador, soma = armazena a soma dos n numeros, num = numero lido para somar */
    scanf("%d",&n);

    while (i < n){          /* Ciclo que efetuada a soma dos n numeros */
        scanf("%d",&num);
        soma += num;
        i++;
    }

    printf("%d",soma);

    return 0;
}
