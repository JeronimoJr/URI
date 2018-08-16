#include <stdio.h>

int main(int argc, char** argv){
    int qtd,soma,i, n,a,b;
    qtd = 1;
    soma = 0;
    while(1){
        scanf("%d",&n);
        if(n == 0)
            break;
        printf("Teste %d\n",qtd);
        for(i = 0; i < n; i++){
            scanf("%d%d",&a,&b);
            soma += a-b;
            printf("%d\n",soma);
        }
        printf("\n");
        qtd++;
        soma = 0;
    }

    return 0;
}
