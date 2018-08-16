#include <stdio.h>

int main(int argc, char** argv){
    int mat[200][200],i,j,n,m,soma,aux;
    soma = aux = 0;

    scanf("%d%d",&n,&m);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            soma += mat[i][j];
        }
        if(i == 0)
        aux = soma;
        else if(i > 0){
            if(soma > aux)
                aux = soma;
        }
        soma = 0;
    }
    for(j = 0; j < m; j++){
        for(i = 0; i < n; i++){
            soma += mat[i][j];
        }
        if(soma > aux)
            aux = soma;
        soma = 0;
    }

    printf("%d\n",aux);

    return 0;
}
