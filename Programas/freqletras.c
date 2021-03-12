#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 201

/* URI 1255, Programa que verifica quais letras mais apareceram numa determinada frase */

int main()
{
      int n,z=0;
      scanf("%d ",&n);

      while (z < n){

          int ver[MAX];
          char frase[MAX],resp[MAX],fim[MAX];
          int i=0,k=0,aux = 1,cont=0,j=0,p=0,tam=0;


        fgets(frase,201,stdin);
        size_t ln = strlen(frase);
        if (frase[ln] == '\n')
            frase[ln] = '\0';

          /* Equivalencia dos caracteres maiúsculos e minúsculos e adquirição do tamanho da string digitada */

          for (i = 0; frase[i] != '\0';i++){

            for ( j = 0; aux == 1; j++){

                    if (frase[i] >= 64 && frase[i] <= 90){
                        frase[i] = frase[i] + 32;
                        if (frase[j] == frase[i] || frase[j] == frase[i] + 32){
                            k++;
                        }
                    }

                    else if (frase[i] >= 97 && frase[i] <= 122){
                        if (frase[j] == frase[i] || frase[j] == frase[i] - 32){
                            k++;
                        }
                    }

                    if (frase[j] == '\0'){
                        ver[i] = k;
                        resp[i] = frase[i];
                        aux = 0;
                        k = 0;
                    }
            }
          aux = 1;
          cont++;
          }



        /* Seleção dos elementos que mais se repetem */

        for (i = 0; i < cont; i++){

                for (j = cont-1; j >= 0; j--){
                    if(ver[i] >= ver[j]){
                        p += 1;
                        if (p == cont){
                            fim[tam] = resp[i];
                            tam++;
                        }
                    }

                    else{
                        break;
                    }


                }

        p = 0;
        }

        /* Remoção dos elementos repetidos dentro do novo vetor */

        for( i = 0; i < tam; i++ )
        {
            for( j = i + 1; j < tam; )
            {
                if( fim[j] == fim[i] )
                {
                    for( k = j; k < tam; k++ )
                        fim[k] = fim[k + 1];

                    tam--;
                }
                else
                {
                    j++;
                }
            }
        }

        /* Ordenação do vetor resposta */

        for(j=tam-1; j>=1; j--){

            for(i=0; i<j; i++){

                if(fim[i]>fim[i+1]){
                    aux=fim[i];
                    fim[i]=fim[i+1];
                    fim[i+1]=aux;

                }

            }

        }

        /* Impressão do resultado */

        for (i = 0; i < tam; i++){
            printf("%c",fim[i]);
        }

        printf("\n");



    tam =0;
    z++;
    }

    return 0;
}
