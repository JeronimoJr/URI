#include <stdio.h>

int main(int argc, char** argv){
    int a,b,c,d,i,aux,maior,aux1,aux2,aux3;
    aux = aux1 = aux2 = aux3 = 0;
    maior = 1;

    scanf("%d%d%d%d",&a,&b,&c,&d);

    aux = b*d;
    aux1 =  a*(aux/b);
    aux2 = c*(aux/d);
    aux3 = aux1+aux2;

    for(i = 2; i <= aux; i++){
        if(aux % i == 0 && aux3 % i == 0)
            maior = i;
    }

    printf("%d %d\n",aux3/maior,aux/maior);

    return 0;
}

