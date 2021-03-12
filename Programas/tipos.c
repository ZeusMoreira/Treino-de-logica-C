#include <stdio.h>
#include <string.h>



void limpabuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}
int main(void)
{
char caractere;
char inteiro[50];
int a;


    scanf("%s",inteiro);
    limpabuffer();
    scanf("%c",&caractere);

    a = strlen(inteiro);
    inteiro[a] = caractere;
    inteiro[a+1] = '\0';

    printf("%s",(inteiro));

return 0;
}
