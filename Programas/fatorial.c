#include <Stdio.h>

/* Ex 6.4 pág 70 */

int main(){

    int n,fatorial,fat,i;

    scanf("%d",&n);

    if (n == 0 || n == 1)
        printf("%d! = %d\n",n,1);

    else{

        fatorial = n;
        i = 0;
        while (i < n - 1){
            fat = n - (i + 1);
            fatorial = fatorial * fat;
            i++;
        }

        printf("%d! = %d",n,fatorial);

    }

     return 0;
}
