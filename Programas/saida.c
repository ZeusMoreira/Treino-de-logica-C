#include <stdio.h>
int main(void)
{
    char s[] = "Dvmuvsb", *p;

    for (p = s; *p; p++){s
        printf("%d\n",*p);
        --*p;
        printf("%d\n",*p);

    }
    printf("%s\n", s);
    return 0;
}


// p = s[0] == D == 68, *p == C == 67,
// p = s[1] == v == 118, *p == u == 117,
// p = s[2] = m == 109, *p == l == 108.
//...
