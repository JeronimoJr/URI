#include <stdio.h>

int main(int argc, char** argv){
    int n,saldo,i,aux,t;
    saldo = aux = 0;

    scanf("%d%d",&n,&saldo);

    for(i = 0; i < n; i++){
        scanf("%d",&t);
        saldo += t;
        if(i == 0)
            aux = saldo;
        if(saldo < aux)
            aux = saldo;
    }
    printf("%d\n",aux);
    return 0;
}
