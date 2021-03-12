#include <stdio.h>

/* Ex 6.11 pág 71 */

int main(){

    int n,pos=0,notpos=0,i=0,num;
    scanf("%d",&n);

    while (i < n){
        scanf("%d",&num);
        if (num > 0)
            pos++;
        else
            notpos++;
        i++;
    }

    printf("Qntd de numeros positivos: %d\n",pos);
    printf("Qntd de numeros nao positivos: %d\n",notpos);

    return 0;
}
