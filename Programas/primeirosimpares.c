#include <stdio.h>

/* Ex 6.3 pág 70 */

int main(){

    int n,contador=0,numero=0;  /* n = quantidade de numeros impares desejados , numero = numero teste de paridade*/
    scanf("%d",&n);

    while (contador < n){  /* Ciclo que ocorre enquanto os n numeros impares não são mostrados*/

        if (numero % 2 != 0 && contador < n-1){ /* Condicional para descobrir se o numero é impar e para colocar virgula enquanto não chega no ultimo numero */
            printf("%d,",numero);
            contador++;
        }

        else if(numero % 2 != 0 && contador == n-1){ /* Condicional para descobrir se o numero é impar e para colocar ponto quando chegar no ultimo numero */
            printf("%d.\n",numero);
            contador++;
        }

        numero++;
    }

    return 0;
}
