#include <stdio.h>

/* Ex 1.1, Apostila 2, pág 4/5 */

int pot(int x, int n)
{
    int i;
    int aux = x;

    for(i = 0; i < n-1; i++)
        x *= aux ;
    return x;
}

int potR()
{
     if ( n == 0){
        return 1;
     }

     else{
        return x * potR(n-1);
     }
}

int main()
{
    int x,n;

    scanf("%d %d",&x,&n);
    printf("%d\n",pot(x,n));
    printf("%d\n",potR(x,n));
    return 0;
}
