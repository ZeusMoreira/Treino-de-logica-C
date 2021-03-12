#include <stdio.h>

/* Ex 1.3, Apostila 2, pág 6 */

int mdc(int a, int b){

    int aux;

    if (b == 0)
        return a;

    else
        return mdc(b,a%b);

}

int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    printf("MDC: %d\n",mdc(n,p));
    return 0;
}
