#include <stdio.h>

int main(int argc, char** argv){
    int n,cap,s,e,i,cont,soma;
    soma = cont = 0;

    scanf("%d%d",&n,&cap);
    for(i = 0; i < n; i++){
        scanf("%d%d",&s,&e);
        if(i == 0)
            soma += e;
        else if(i > 0)
            soma += (-s) + (e);
        if(soma > cap)
            cont++;
    }
    if(cont == 0)
        printf("N\n");
    else
        printf("S\n");
    return 0;
}
