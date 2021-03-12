#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void limpabuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void verifica_tudo(int n, char *v)
{
    int i,digitos=0,maiusculas=0,minusculas=0,espacos=0,pontuacao = 0;
    for (i=0; i < n; i++)
    {
        if (isdigit(*(v+i)))
            digitos++;
        else if (isupper(*(v+i)))
            maiusculas++;
        else if (islower(*(v+i)))
            minusculas++;
        else if (isspace(*(v+i)))
            espacos++;
        else if (ispunct(*(v+i)))
            pontuacao++;

    }
    printf("\nDigitos = %d\nMaiusculas = %d\nMinusculas = %d\nEspacos = %d\nPontuacao: %d\n",digitos,maiusculas,minusculas,espacos,pontuacao);

}

int main()
{
    char *v;
    int n;
    scanf("%d",&n);
    limpabuffer();

    v = malloc(n+1);

    scanf("%[^\n]",v);
    verifica_tudo(n,v);

    return 0;
}
