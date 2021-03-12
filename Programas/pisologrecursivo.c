#include <stdio.h>

/* Ex 1.7, Apostila 2, pág 7 */

int piso_log2(int n){

    if (n < 2){
        return 0;
    }

    else{
        return 1 + piso_log2(n/2);
    }
}

int main(){

    int n;
    scanf("%d",&n);
    printf("%d\n",piso_log2(n));

    return 0;
}
