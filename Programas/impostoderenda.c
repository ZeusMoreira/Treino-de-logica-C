#include <stdio.h>

/* Programa 1051 do URI */

int main()
{

    double renda;
    double imposto;

    scanf("%lf",&renda);

    /* Calculo do imposto */

    if (renda > 2000 && renda <= 3000)
        imposto = (renda-2000) * 0.08;


    else if (renda > 3000 && renda <= 4500)
        imposto = ((renda-3000)*0.18)+(1000 * 0.08);


    else
        imposto = ((renda-4500)*0.28) + (1500 * 0.18) + (1000 * 0.08);

    /* Impressão */

    if (renda >= 0 && renda <= 2000)
        printf("Isento\n");

    else
        printf("R$ %.2f\n",imposto);


    return 0;
}
