#include <stdio.h>
#define MAX 100
int main()
{

    /* "*p++" = Acessa o conteudo de p e depois avança 1 pro endereço de p */
    /* "(*p)++" Mostra o conteudo de p e depois adiciona 1 no seu conteudo */
    /* "*++p" = Pula pro próximo endereço de p e mostra seu conteudo */
    /* "++*p" = Incrementa 1 no conteudo de p e depois mostra o conteudo */


    int a[MAX],i=0,n=5;
    int *p;
    for(i=0; i < n; i++)
        scanf("%d",&a[i]);

    p = a;

    printf("*p = %d\n",*p);
    printf("p = %d\n",p);
    printf("p[0] = %d\n",p[0]);
    printf("&v[0] = %d\n",&a[0]);
    printf("v[0] = %d\n",a[0]);



    return 0;
}
