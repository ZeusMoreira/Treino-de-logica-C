#include <stdio.h>
#include <math.h>

/* Ex 1.9, Apostila 2, pág 8 */

int potencia(int x, int n){

    if (n == 0)
        return 1;

    else{
        if (n % 2 == 0){
            return potencia(x,n/2) * potencia(x,n/2);
        }
        else{
            return x * potencia(x,n-1);
        }
    }
}

int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    printf("%d\n",potencia(x,n));
    return 0;
}
