#include <stdio.h>
#include <string.h>
#define MAX 100
#define typeof(var) _Generic( (var),\
char: "Char",\
int: "Integer",\
float: "Float",\
char *: "String",\
void *: "Pointer",\
default: "Undefined")


char *duplica(const char *p,char aux[MAX])
{
    char *q;
    q = aux;
    strcpy(q,p);
    return q;
}


int main()
{
    char v[MAX];
    char aux[MAX];
    char *s;
    char *a;
    int i,n = 9;

    for (i = 0; i < n; i++)
        scanf("%c",&v[i]);
    v[n] = '\0';


    s = v;
    a = duplica(s,aux);
    printf("%s",a);

    return 0;
}
