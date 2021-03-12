#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100


int tamanho(char *p)
{
    char *elemento;
    int tam=0;

    for(elemento = p; *elemento; elemento++)
        tam++;

    return tam;
}

int vogais(char *p)
{
    char *letra;
    int vogal = 0;

    for(letra = p; *letra; letra++){
        if ((*letra == 'a' || *letra == 'A') || (*letra == 'e' || *letra == 'E') || (*letra == 'i' || *letra == 'I') || (*letra == 'o' || *letra == 'O') || (*letra == 'u' || *letra == 'U'))
            vogal++;
    }

    return vogal;
}

int consoantes(char *p)
{
    char *letra;
    int cons = 0;

    for(letra = p; *letra; letra++){

        if (*letra >= 'B' && *letra <= 'Z')
            *letra = *letra + 32;

        if (*letra >= 'b' && *letra <= 'z'){
            switch(*letra){
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    break;
                default:
                    cons++;
            }
        }
    }

    return cons;
}

void limparbuffer(void){
    char c;
    while ((c=getchar()) != '\n' && c != EOF);
}


int main()
{
    char *p[MAX];
    char s[MAX][MAX];
    int size[MAX],vogal[MAX],cons[MAX],simbolos[MAX];
    int i,n;
    scanf("%d\n",&n);


    for (i=0; i < n;i++){
        scanf("%[^\n]",s[i]);
        p[i] = s[i];
        limparbuffer();
    }

    for (i=0; i < n; i++){

        printf("\n%s\n",p[i]);
        size[i] = tamanho(p[i]);

        vogal[i] = vogais(p[i]);
        printf("Media vogal: %.2lf\n",(double)vogal[i]/size[i]);

        cons[i] = consoantes(p[i]);
        printf("Media consoante: %.2lf\n",(double)cons[i]/size[i]);

        simbolos[i] = abs(size[i] - (cons[i] + vogal[i]));
        printf("Media simbolos: %.2lf\n",(double)simbolos[i]/size[i]);

        printf("\n");
    }
    return 0;
}
