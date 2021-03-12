#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,resto;

    scanf("%d %d",&a,&b);

    resto = abs(a % b);

    printf("resto = %d",resto);


    return 0;
}
