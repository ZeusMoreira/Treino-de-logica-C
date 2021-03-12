#include <stdio.h>

int main()
{

    struct {
       int hh;
       int mm;
       int ss;
    } inicio,fim,total = {0};
    scanf("%d:%d:%d",&inicio.hh,&inicio.mm,&inicio.ss);
    scanf("%d:%d:%d",&fim.hh,&fim.mm,&fim.ss);

    /* Hora inicial acima da hora final */
    if (inicio.hh > fim.hh){
        /*                   */
        if(inicio.mm > fim.mm){

            if (inicio.ss < fim.ss)
                total.ss = fim.ss - inicio.ss;
            else if (inicio.ss > fim.ss){
                total.ss = (60 - inicio.ss) + fim.ss;
                fim.mm--;
            }
            else
                total.ss = 0;

            total.mm = (fim.mm + 60) - inicio.mm;
        }
        /*                   */
        else if (inicio.mm < fim.mm){
            if (inicio.ss < fim.ss)
                total.ss = fim.ss - inicio.ss;
            else if (inicio.ss > fim.ss){
                total.ss = (60 - inicio.ss) + fim.ss;
                fim.mm--;
            }
            else
                total.ss = 0;
            total.mm = fim.mm - inicio.mm;
        }
        /*                   */
        else
            total.mm = 0;

        total.hh = (24 - inicio.hh) + fim.hh;
    }

    /* Hora inicial abaixo da hora final */
    else if (inicio.hh < fim.hh){

        if (inicio.mm > fim.mm){

            if (inicio.ss < fim.ss)
                total.ss = fim.ss - inicio.ss;
            else if (inicio.ss > fim.ss){
                total.ss = (60 - inicio.ss) + fim.ss;
                fim.mm--;
            }
            else
                total.ss = 0;
            fim.hh--;
            total.mm = (fim.mm + 60) - inicio.mm;
        }


        else if (inicio.mm < fim.mm){
            if (inicio.ss < fim.ss)
                total.ss = fim.ss - inicio.ss;
            else if (inicio.ss > fim.ss){
                total.ss = (60 - inicio.ss) + fim.ss;
                fim.mm--;
            }
            else
                total.ss = 0;
            total.mm = fim.mm - inicio.mm;
        }

        else
            total.mm = 0;

        total.hh = fim.hh - inicio.hh;
    }

    /* Hora final = Hora inicial */
    else{
        /*                   */
        if (inicio.mm > fim.mm){

            if (inicio.ss < fim.ss)
                total.ss = fim.ss - inicio.ss;
            else if (inicio.ss > fim.ss){
                total.ss = (60 - inicio.ss) + fim.ss;
                fim.mm--;
            }
            else
                total.ss = 0;
            total.mm = (fim.mm + 60) - inicio.mm;
            total.hh = 23;
        }
        /*                   */
        else if (inicio.mm < fim.mm){
            if (inicio.ss < fim.ss)
                total.ss = fim.ss - inicio.ss;
            else if (inicio.ss > fim.ss){
                total.ss = (60 - inicio.ss) + fim.ss;
                fim.mm--;
            }
            else
                total.ss = 0;
            total.mm = fim.mm - inicio.mm;
        }
        /*                   */
        else if (inicio.mm == fim.mm){

            if (inicio.ss == fim.ss)
                total.hh = 24;
            else if (inicio.ss < fim.ss){
                total.ss = fim.ss - inicio.ss;
                total.hh = 23;
            }
            else if (inicio.ss > fim.ss){
                total.ss = (60 - inicio.ss) + fim.ss;
                fim.mm--;
                total.hh = 23;
            }
        }
    }

    printf("%02d:%02d:%02d\n",total.hh,total.mm,total.ss);
    return 0;
}
