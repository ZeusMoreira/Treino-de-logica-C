#include <stdio.h>
#define MAX 100
int main()
{

    /* "*p++" = Acessa o conteudo de p e depois avan�a 1 pro endere�o de p */
    /* "(*p)++" Mostra o conteudo de p e depois adiciona 1 no seu conteudo */
    /* "*++p" = Pula pro pr�ximo endere�o de p e mostra seu conteudo */
    /* "++*p" = Incrementa 1 no conteudo de p e depois mostra o conteudo */


    int a[MAX],i=0,n=5;
    int *p;
    for(i=0; i < n; i++)
        scanf("%d",&a[i]);

    p = &a[0];

    printf("%d\n",*p++);
    printf("%d\n",*p++);

    return 0;
}
