#include <stdio.h>

/* Ex 4.6 Pág 56 */

int main(){

    int numero,quadrado,cubo;

    scanf("%d",&numero);
    quadrado = numero * numero;
    cubo = numero * numero * numero;
    printf("Quadrado de %d: %d\nCubo de %d: %d",numero,quadrado,numero,cubo);


    return 0;
}
