#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


int main(int argc, char *argv[])
{
    while (argc > 1){
        printf("%s ",argv[argc-1]);
        argc--;
    }

    return 0;
}
