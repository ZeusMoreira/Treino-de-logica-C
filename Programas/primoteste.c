#include <stdlib.h>
#include <stdio.h>

int primo (int n) {

for(int i=2; i<n; i++) {

      if(n==2)
      return 1;

         if (n%i==0)
         continue;
         else
         return 1;
         }
         return 0;
}

int main() {

int n;
printf("entre com um valor");
scanf("%d",&n);

printf("%d\n",primo(n));

system("pause");
return 0;

}
