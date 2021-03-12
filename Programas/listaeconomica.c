#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 201
#define TF 100000

/* Programa que sugere economia em uma lista telefonica, emitindo os numeros repetentes do número acima */
/* Ex:
        10111 // Primeiro número
        10122 // Economizou 3 char, visto que 101 é o sufixo
        20221 // Não economizou, visto que o numero acima não tem o mesmo sufixo
        20222 // Economizou 4 char, visto que 2022 é o sufixo
        20256 // Economizou 3 char, visto que 202 é o sufixo

        Foi economizado 3+4+3 = 10 chars
*/

void troca(int i,int j,char lista[TF][MAX])
{
    char aux[MAX];
    strcpy(aux,lista[i]);
    strcpy(lista[i],lista[j]);
    strcpy(lista[j],aux);
}

int separa(int p, int r, char lista[TF][MAX])
{
    char *x;
    int i,j;
    x = lista[p];
    i = p;
    j = r;

    while (1)
    {
        while(strcmp(lista[j],x) > 0)
            j--;
        while(strcmp(lista[i],x) < 0)
            i--;

        if (i < j){
            troca(i, j, lista);
        }

        else
            return j;
        j--;
        i++;
    }
}

void quicksort(int p, int r, char lista[TF][MAX])
{
    int q;
    if (p < r){
       q = separa(p,r,lista);
       quicksort(p,q,lista);
       quicksort(q+1,r,lista);
    }
}

void limpabuffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    int n,i,carac=0,j,p=0; // n = número de números da lista, i = contador, carac = chars economizados, j = contador, p = usado no quicksort

    while((scanf("%d", &n)) != EOF) // Vai ler os casos de teste até o final do arquivo
    {
        limpabuffer();
        char lista[n][MAX]; // Formação da lista de números dispostos de maneira vertical , a lista possui "n" números e cada número tem no máximo 200 chars.

        for (i=0; i < n; i++){ // Leitura da lista
            scanf("%s",lista[i]);
            limpabuffer();
        }
        quicksort(p,n-1,lista); // Organização da lista para maior redução dos chars, visto que 20228 em baixo de 20221 tem redução e 101221 embaixo de 20228 não há redução.

        for (i=0; i < n-1; i++){ // Ciclo que varre os numeros da lista
              for (j=0; j < strlen(lista[i]); j++){ // Ciclo que varre os chars de cada numero
                   if (lista[i][j] != lista[i+1][j]) // condicional que verifica se não há o(s) mesmo(s) prefixos
                        break;
                   else
                    carac++;
              }
        }

        printf("%d\n",carac);
        carac = 0;
    }

    return 0;
}
