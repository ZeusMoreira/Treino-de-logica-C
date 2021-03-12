#include <stdio.h>

int main()
{
    struct {
      int day;
      int mes;
      int ano;
    } dia,seguinte;

    scanf("%d/%d/%d",&dia.day,&dia.mes,&dia.ano);
    seguinte = dia;
    seguinte.day++;

    /* Mudança de dia e de mês */

    if (seguinte.day == 31 && (seguinte.mes == 11 || seguinte.mes == 9 ||  seguinte.mes == 6 || seguinte.mes == 4))
    {
        seguinte.day = 1;
        seguinte.mes++;
    }

    else if (seguinte.day == 32 && (seguinte.mes == 1 || seguinte.mes == 3 || seguinte.mes == 5 || seguinte.mes == 7 || seguinte.mes == 8 || seguinte.mes == 10))
    {
        seguinte.day = 1;
        seguinte.day++;
    }

    else if (seguinte.day == 29 && seguinte.mes == 2 && ((seguinte.ano % 4 != 0 && seguinte.ano % 100 !0= 0) || (seguinte.ano % 400 != 0)))
    {
        seguinte.day = 1;
        seguinte.mes++;
    }

    else if (seguinte.day == 30 && seguinte.mes == 2 && ((seguinte.ano % 4 == 0 && seguinte.ano % 100 == 0) || (seguinte.ano % 400 == 0)))
    {
        seguinte.day = 1;
        seguinte.mes++;
    }

    /* Mudança de ano */

    if (seguinte.day == 32 && seguinte.mes == 12)
    {
        seguinte.day = 1;
        seguinte.mes = 1;
        seguinte.ano++;
    }

    printf("%02d/%02d/%02d\n",seguinte.day,seguinte.mes,seguinte.ano);
    return 0;
}
