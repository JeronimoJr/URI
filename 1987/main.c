#include <stdio.h>

int main(int argc, char** argv){
    int n, soma,cont,m;
    soma = cont = 0;

    while(scanf("%d%d",&n,&m) != EOF){
        while(1){
            soma += m % 10;
            m = m/10;
            cont++;

            if(cont == n)
                break;
        }

        if(soma % 3 == 0)
            printf("%d sim\n", soma);
        else
            printf("%d nao\n", soma);

        soma = 0;
        cont = 0;
    }
    return 0;
}
