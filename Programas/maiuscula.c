#include <stdio.h>
#include <string.h>
#define MAX 100

void maiuscula2(char cadeia[])
{
    int i;
    for(i=0; i < strlen(cadeia);i++){
        if (cadeia[i] >= 'A' && cadeia[i] <= 'Z')
            cadeia[i] = cadeia[i] + 32;
    }
}

void maiuscula(char *cadeia)
{
    char *p;
    for(p = cadeia; *p; p++){
        if (*p >= 'A' && *p <= 'Z'){
            *p = *p + 32;
        }
    }
}


int main()
{
    char cadeia[MAX];
    char *p;
    scanf("%[^\n]",cadeia);

    p = cadeia;
    maiuscula(p);

    printf("%s",cadeia);

    return 0;
}
