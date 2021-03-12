#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2001

void removet(int x,int indice,int n,char linha[MAX])
{
     int i = (indice - x) + 1,j=0,maxi,k=0,q=1;

     maxi = (x/255);
     if (x > 255 && linha[i] == '0'){
            for(j = 0; j < maxi+1;){
                linha[indice - x + j*2] = '#';
                if (j < maxi){
                    linha[indice - x + q] = (char)(255);
                    q+=2;
                }
                j++;
            }
            printf("%d\n",maxi);
            linha[indice - x + q] = (char)(x-(255*maxi));
            maxi--;
     }

     else if (x < 255 && linha[i] == '0'){
        linha[indice - x + j] = '#';
        linha[indice - x + j + 1] = (char)(x);
     }

     else if (x > 255 && linha[i] == ' '){
            for(j = 0; j < maxi+1;){
                linha[indice - x + j*2] = '$';
                if (j < maxi){
                    linha[indice - x + q] = (char)(255);
                    q+=2;
                }

                j++;
            }
        linha[indice - x + q] = (char)(x-(255*maxi));
        maxi--;
     }

     else if (x < 255 && linha[i] == ' '){
        linha[indice - x + j] = '$';
        linha[indice - x + j + 1] = (char)(x);
     }


    for (i = indice - x + j + maxi + 2; i < indice ; i++)
    {

        for (k = indice - x + j + maxi + 2; k < n-1; k++){
            linha[k] = linha[k+1];
        }
        n--;
    }

    linha[n] = '\0';
}


void limpabuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}


int main()
{
    int n,cont;
    scanf("%d",&n);
    limpabuffer();

    for(cont=0; cont < n; cont++)
    {
        char linha[MAX];
        int i,counter=0;

        fgets(linha,2001,stdin);
        for(i=0; i < strlen(linha)-1; i++)
        {
            if ((linha[i] == ' ' || linha[i] == '0') && counter == 0)
                counter++;

            else if ((linha[i-1] == ' ' || linha[i-1] == '0') && linha[i] == linha[i-1])
                counter++;

            if (counter > 2 && linha[i] != linha[i-1]){
                removet(counter,i,strlen(linha),linha);
                i = i - counter;
                counter = 0;
            }
            else if (counter <= 2 && linha[i+1] != linha[i] )
                counter = 0;
        }

        printf("%s\n",linha);
    }

    return 0;
}
