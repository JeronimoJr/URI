#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 10

int main(){
    int n, i, j, ruim, matriz[MAX][MAX], vez, soma;

    scanf("%d", &n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &matriz[i][j]);

    for(j=0, soma = 0; j<n; j++)
        soma += matriz[0][j];

    for(i=1, ruim=0, vez=0; i<n; i++){
        for(j=0; j<n; j++)
            vez+= matriz[i][j];
    if(vez != soma){
            ruim=1;
            break;
    }else
            vez=0;
    }
    if(!ruim){
        for(j=0, vez=0; j<n; j++){
            for(i=0; i<n; i++)
                vez+= matriz[i][j];
            if(vez != soma)	{
                ruim = 1;
                break;
            }else
                vez = 0;
        }
        if(!ruim){
            for(i=0, j=0, vez=0; i<n; i++, j++)
                vez+= matriz[i][j];
            if(vez == soma){
                for(i=0, j=n-1, vez=0; i<n; i++, j--){
                    vez+= matriz[i][j];
                }
                if(vez != soma)
                    ruim=1;
            }else
                ruim=1;
        }
    }
    if(ruim)
        printf("-1\n");
    else
        printf("%d\n", soma);


    return 0;
}
