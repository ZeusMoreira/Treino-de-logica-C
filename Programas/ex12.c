#include <stdio.h>
#define MAX 100

int main()
{
    char *p;
    char v[MAX];
    int n=0;

    for(p = v; (*p++ = getchar()) != '\n'; n++);

    for(p = v + n - 1 ; p >= v ; p--)
        printf("%c",*p);

    return 0;
}
