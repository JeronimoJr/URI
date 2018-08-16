#include <stdio.h>

int main(int argc, char** argv){
    char nome[12], nome1[12];
    int par,impar,i,n,soma,qtd;
    soma = 0;
    qtd = 1;

    do{
        scanf("%d",&n);
        if(n == 0)
            break;
        scanf("%s",nome);
        scanf("%s",nome1);
        printf("Teste %d\n",qtd);
        for(i = 0; i < n; i++){
            scanf("%d%d",&par,&impar);
            if((par+impar) % 2 == 0)
                printf("%s\n",nome);
            else
                printf("%s\n",nome1);
        }
        qtd++;
        printf("\n");
    }while(1);

    return 0;
}
