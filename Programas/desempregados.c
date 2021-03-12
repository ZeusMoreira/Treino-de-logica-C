#include <stdio.h>
#include <stdlib.h>
#define MAX 20

/* Programa 1119 URI */

void remove_horario(int roda[MAX],int k,int N){
    int i,j,aux;

    /* Passando o elemento que "k" escolheu e passando pra ultima posição do vetor */

    aux = roda[k];
    roda[k] = roda[N-1];
    roda[N-1] = aux;
    N--;

    /* Ordenação */

    for(j=N-1; j>=1; j--){
        for(i=0; i<j; i++){
            if(roda[i]>roda[i+1]){
                aux=roda[i];
                roda[i]=roda[i+1];
                roda[i+1]=aux;
            }
        }
    }
}

void remove_antihorario(int roda2[MAX],int m,int N){
    int i,j,aux;

    aux = roda2[m];
    roda2[m] = roda2[N-1];
    roda2[N-1] = aux;
    N--;

    for(j=N-1; j>=1; j--){
        for(i=0; i<j; i++){
            if(roda2[i]>roda2[i+1]){
                aux=roda2[i];
                roda2[i]=roda2[i+1];
                roda2[i+1]=aux;
            }
        }
    }
}

void intersec(int roda[MAX], int roda2[MAX],int N){

    int i,j,rodafinal[MAX],tam=0,ind=0;

    for (i = 0; i < N;i++){
        for (j = 0; j < N; j++){
            if (roda[i] == roda2[j]){
                rodafinal[ind] = roda[i];
                ind++;
                tam++;
            }

        }
    }

    if (tam == 1){
         for (i = 0; i <= tam; i++)
            roda[i] = rodafinal[i];

        for (i = 0; i <= tam; i++)
            roda2[i] = rodafinal[i];
    }

    else{
        for (i = 0; i < tam; i++)
            roda[i] = rodafinal[i];

        for (i = 0; i < tam; i++)
            roda2[i] = rodafinal[i];
    }


}

int main(){

    int N,k,i,m,roda[MAX],roda2[MAX],cont=0,aj,ak,l,aux1,aux2;
    scanf("%d %d %d",&N,&k,&m);

    while (N != 0 || k != 0 || m != 0){
        aj = k;
        ak = m;
        m = N - m;
        printf("M = %d\n",m);
        k = k - 1;
        l = N;

        for (i = 0; i <= N; i++){
            roda[i] = i+1;
            roda2[i] = i+1;
        }

        while (N > 0){
            remove_horario(roda,k,N);
            remove_antihorario(roda2,m,N);


            if (N == 1 || (N == 2 && N == l)){
                if (roda[N-1] == roda2[N-1])
                    printf("  %d\n",roda[N-1]);
                else
                    printf("  %d  %d\n",roda[N-1],roda2[N-1]);
                N = 0;
                break;
            }

            else{
                if (roda[N-1] == roda2[N-1]){
                    printf("  %d,",roda[N-1]);
                }
                else
                    printf("  %d  %d,",roda[N-1],roda2[N-1]);
            }

            cont = 0;
            for (i = 0; i < N-1;i++){
                    if (roda[i] == roda2[i]){
                        cont++;
                    }
            }


            if (cont == N-1){

            }
            else{
                N -= 1;
            }

            intersec(roda,roda2,N);
            N--;

            if (N == l-2){
                m -= 1;
            }

            if (k > N-1){
                aux1 = k - (N-1);
                k = k - aux1;
            }

            k+=aj-1; /* Correto */
            if (k >= N){         /* Correto */
                while (k >= N){
                        aux1 = k - N;
                        k = aux1;
                }
            }

            printf("m = %d ak = %d\n",m,ak);
            m = m - (ak);
            printf("m = %d\n",m);
            if (m < 0){
                while (m < 0){
                    aux2 = N + m;
                    m = aux2;
                }
            }



        }

        scanf("%d %d %d",&N,&k,&m);
    }

    return 0;
}
