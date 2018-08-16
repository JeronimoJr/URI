#include <stdio.h>

int main(int argc, char** argv){
    int n,lata,i,copo,soma;
    soma = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d%d",&lata,&copo);
        if(lata > copo)
            soma += copo;
    }
    printf("%d\n",soma);
    return 0;
}
