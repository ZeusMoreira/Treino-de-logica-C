#include <stdio.h>
#define MAX 1000

/* Ex 1.4, Apostila 2, pág 6 */

float soma(int n, float v[MAX]){

    if (n == 0)
        return v[0];

    else{
        return v[n] + soma(n-1,v);
    }
}

int main(){

    int n,i=0;
    float v[MAX];

    scanf("%d",&n);
    for (i = 0; i < n; i++){
        scanf("%f",&v[i]);
    }

    printf("%f\n",soma(n-1,v));

    return 0;
}

