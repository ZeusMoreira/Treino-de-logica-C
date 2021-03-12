#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 201

typedef struct reg reg;

struct reg{
    char nome[MAX];
    int rga;
};

int busca_binariaR(reg estudante[MAX], int ini, int fim, int rga)
{

    int i = (ini + fim) / 2;

    if (ini > fim) {
        return -1;
    }

    if (estudante[i].rga == rga) {
        printf("%s\n",estudante[i].nome);
    }

    if (estudante[i].rga < rga) {
        return busca_binariaR(estudante, i + 1, fim, rga);


    } else {
        return busca_binariaR(estudante, ini, i - 1, rga);
    }
}

void troca(int i,int j,reg estudante[MAX])
{
    reg aux;
    aux = estudante[i];
    estudante[i] = estudante[j];
    estudante[j] = aux;
}

int separa(int p, int r, reg estudante[MAX])
{
    reg x;
    int i,j;
    x = estudante[p];
    i = p;
    j = r;

    while (1)
    {
        while(estudante[j].rga > x.rga)
            j--;
        while(estudante[i].rga < x.rga)
            i++;

        if (i < j){
            troca(i, j, estudante);
        }

        else
            return j;
        j--;
        i++;
    }
}

void quicksort(int p, int r, reg estudante[MAX])
{
    int q;
    if (p < r){
       q = separa(p,r,estudante);
       quicksort(p,q,estudante);
       quicksort(q+1,r,estudante);
    }
}

void limpabuffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    int n,m,rga;
    reg estudante[MAX];
    int i;

    scanf("%d",&n);
    limpabuffer();
    for (i=0; i < n; i++)
    {
        scanf("%[^\n]",estudante[i].nome);
        scanf("%d",&estudante[i].rga);
        limpabuffer();
    }
    quicksort(0,n-1,estudante);

    scanf("%d",&m);
    for (i=0; i < m; i++){
        scanf("%d",&rga);
        busca_binariaR(estudante,-1,n,rga);
    }

    return 0;
}
