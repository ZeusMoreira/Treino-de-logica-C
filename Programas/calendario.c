#include <stdio.h>
#include <locale.h>

/* Ex 7.10 pág 80 */

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dias,start,i=0,j=1,mes;

    /* Aqui começa a leitura dos itens para o desenvolvimento do calendário */

    printf("\nInforme quantos dias tem o mês: ");
    scanf("%d",&dias);
    printf("Informe o dia da semana em que começa o mês (1 = Domingo...): ");
    scanf("%d",&start);
    printf("Informe o mês: ");
    scanf("%d",&mes);

    /* Finaliza a leitura dos itens */


    /* Aqui começa o desenvolvimento do calendário */

    printf("\n---------------------\n");
    printf("  CALENDÁRIO MÊS %d\n",mes);
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

    /* Aqui finaliza o desenvolvimento do calendário */

    return 0;
}
