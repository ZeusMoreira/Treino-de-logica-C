#include <stdio.h>

void InsertionR(int v[], int n)
{
    if (n > 1)
    {
        InsertionR(v, n - 1);
        int last = v[n - 1];
        int j = n - 2;
        for (j = n - 2; j >= 0 && v[j] < last; --j)
            v[j + 1] = v[j];
        v[j + 1] = last;
    }
}

int main()
{
    int k;
    scanf("%i\n", &k);
    for(int e = 0; e < k; e++){
        int n;
        scanf("%i", &n);
        int v[n];
        for(int c = 0; c < n; c++){
            scanf("%i", &v[c]);
        }
        InsertionR(v, n);
        for(int d= 0; d < n; d++){
            printf("%i ", v[d]);
        }
        printf("\n");
    }
    return 0;
}
