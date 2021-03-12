#include <stdio.h>

/* Ex 1.2 , Apostila 2, pág 6 */

void imprime(int n){

    if (n != 0){
        imprime(n/2);
        printf("%c", '0' + n % 2);
    }
}

int main(){

    int n;
    scanf("%d",&n);
    imprime(n);

    return 0;
}
