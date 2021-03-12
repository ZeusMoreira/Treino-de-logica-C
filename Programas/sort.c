#include <stdio.h>

/* Ex 5.10 pág 66 */

int main(){

    int x,y,z,aux;
    scanf("%d %d %d",&x,&y,&z);

    if (x > y && x > z && y > z){ /* z y x */
        aux = x;
        x = z;
        z = aux;
    }

    else if (x > y && x > z && y < z){ /* y z x */
        aux = x;
        x = y;
        y = z;
        z = aux;
    }

    else if (x < y && x > z && y > z){ /* z x y */
        aux = y;
        y = x;
        x = z;
        z = aux;
    }

    else if (x < y && x < z && y > z){ /* x z y */
        aux = y;
        y = z;
        z = aux;
    }

    else if (x > y && x < z && y < z){ /* y x z */
        aux = x;
        x = y;
        y = aux;
    }

    printf("%d %d %d",x,y,z);
    return 0;
}
