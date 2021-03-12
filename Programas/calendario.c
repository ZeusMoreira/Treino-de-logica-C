#include <stdio.h>
#include <locale.h>

/* Ex 7.10 p�g 80 */

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dias,start,i=0,j=1,mes;

    /* Aqui come�a a leitura dos itens para o desenvolvimento do calend�rio */

    printf("\nInforme quantos dias tem o m�s: ");
    scanf("%d",&dias);
    printf("Informe o dia da semana em que come�a o m�s (1 = Domingo...): ");
    scanf("%d",&start);
    printf("Informe o m�s: ");
    scanf("%d",&mes);

    /* Finaliza a leitura dos itens */


    /* Aqui come�a o desenvolvimento do calend�rio */

    printf("\n---------------------\n");
    printf("  CALEND�RIO M�S %d\n",mes);
    printf("---------------------\n");

    while (i < start-1){
        printf("   ");
        i++;
    }

    while (j <= dias){
        if(j > 0 && j <= 9){
            if(start == 7){
                printf("%02d\n",j);
                start = 1;
            }
            else{
                printf("%02d ",j);
                start++;
            }
        }
        else{
            if(start == 7){
                printf("%d\n",j);
                start = 1;
            }
            else{
                printf("%d ",j);
                start++;
            }
            if (j == dias && start != 1)
                printf("\n");
        }
        j++;
    }

    printf("---------------------\n");

    /* Aqui finaliza o desenvolvimento do calend�rio */

    return 0;
}
