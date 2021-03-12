#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int i,soma = 0;
    for (i = 0; i < argc; i++)
        soma += atoi(argv[i]);

    printf("Soma: %d\n",soma);


    return 0;
}
