#include <stdio.h>
#include <string.h>
#define MAX 50

struct sangue{
    int codigo;
    char nome[MAX+1];
    char tipo[3];
    char rh;
};

void limpabuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void bubblesort(int n, struct sangue bs[MAX])
{
    int i,j,k=0,v=0,xua;
    char aux[MAX];

    for (i=n-1; i > 0; i--){
        for(j=0; j < i;j++){

            if (bs[j].tipo[v] == bs[j+1].tipo[v])
            {
                while (bs[j].tipo[v] == bs[j+1].tipo[v])
                    v++;
            }

            if (bs[j].nome[k] == bs[j+1].nome[k])
            {
                while (bs[j].nome[k] == bs[j+1].nome[k])
                    k++;
            }

            //////////////////////////////////////////////////
            if (bs[j].codigo > bs[j+1].codigo)
            {
                xua = bs[j].codigo;
                bs[j].codigo = bs[j+1].codigo;
                bs[j+1].codigo = xua;
            }


            if (bs[j].nome[k] > bs[j+1].nome[k])
            {
                strcpy(aux, bs[j].nome);
                strcpy(bs[j].nome, bs[j+1].nome);
                strcpy(bs[j+1].nome,aux);
            }
            k=0;

            if (bs[j].tipo[v] > bs[j+1].tipo[v])
            {
                strcpy(aux, bs[j].tipo);
                strcpy(bs[j].tipo, bs[j+1].tipo);
                strcpy(bs[j+1].tipo,aux);
            }
            v=0;
            /////////////////////////////////////////////////

        }
    }
}

int main()
{

    struct sangue bs[MAX];
    int n,i=0,a;
    char padrao[MAX];
    printf("\nDIGITE O NUMERO DE DOADORES: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("\nDIGITE O CODIGO DO %d DOADOR: ",i+1);
        scanf("%d",&bs[i].codigo);
        limpabuffer();
        printf("DIGITE O NOME DO %d DOADOR: ",i+1);
        scanf("%[^\n]",bs[i].nome);
        limpabuffer();
        printf("DIGITE O TIPO SANGUINEO DO %d DOADOR: ",i+1);
        scanf("%s",bs[i].tipo);
        limpabuffer();
        printf("DIGITE O RhA DO %d DOADOR: ",i+1);
        scanf("%c",&bs[i].rh);
        printf("\n");
        a = strlen(bs[i].tipo);
        bs[i].tipo[a] = bs[i].rh;
        bs[i].tipo[a+1] = '\0';
        limpabuffer();
    }

    bubblesort(n,bs);

    printf("PADROES: NOME, CODIGO, TIPO SANGUINEO.\n");
    printf("PADRAO: FIM ENCERRA A SESSAO DE ORGANIZACAO\n\n");
    printf("DIGITE O PADRAO AO QUAL VOCE DESEJA ORGANIZAR O BANCO DE SANGUE:\n\n");


    scanf("%[^\n]",padrao);
    limpabuffer();
    while (strcmp(padrao,"FIM") != 0){
        if (strcmp(padrao,"NOME") == 0){
            printf("\n");
            for(i = 0; i < n; i++)
                printf("%d) %s\n",i+1,bs[i].nome);
            printf("\n");
        }

        else if (strcmp(padrao,"CODIGO") == 0){
            printf("\n");
            for(i = 0; i < n; i++)
                printf("%d) %d\n",i+1,bs[i].codigo);
            printf("\n");
        }

        else if (strcmp(padrao,"TIPO SANGUINEO") == 0){
            printf("\n");
            for(i = 0; i < n; i++)
                printf("%d) %s\n",i+1,bs[i].tipo);
            printf("\n");
        }

        else
            printf("PADRAO INVALIDO\n\n");


        printf("DIGITE O PADRAO AO QUAL VOCE DESEJA ORGANIZAR O BANCO DE SANGUE:\n\n");
        scanf("%[^\n]",padrao);
        limpabuffer();
    }

    return 0;
}
