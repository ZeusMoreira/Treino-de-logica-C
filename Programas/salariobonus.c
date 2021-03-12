#include <stdio.h>

int main()
{

    char NOME;
    double SF,VD,M,T;

    scanf("%s %lf %lf",&NOME,&SF,&VD);

    T = (VD * 15)/100;
    M = T + SF;

    printf("TOTAL = R$ %.2f\n",M);

return 0;
}
