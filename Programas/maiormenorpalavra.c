#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void limparbuffer(void){
    char c;
    while ((c=getchar()) != '\n' && c != EOF);
}



int main(){

    char s[MAX][MAX];
    int i=0,n,aux,aux2;
    char *menor,*maior;

    scanf("%[^\n]",s[i]);
    menor = s[i];
    maior = s[i];
    n = strlen(s[i]);
    aux = n;
    aux2 = n;
    limparbuffer();

    for (i=1; n != 4; i++){
        scanf("%[^\n]",s[i]);
        n = strlen(s[i]);

        if (n < aux){
            menor = s[i];
            aux = n;
        }
        if (n > aux2){
            maior = s[i];
            aux2 = n;
        }
        limparbuffer();
    }

    printf("Maior palavra: %s\n",maior);
    printf("Menor palavra: %s\n",menor);

    return 0;
}
