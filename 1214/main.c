#include <stdio.h>

int main(){
    int n,soma,i,j,notas[1000],tst;
    float media,per,cont;
    media = per = 5;
    soma = 0;
    cont = 0;

    scanf("%d",&tst);

    for(i = 0; i < tst; i++){
        scanf("%d",&n);
        for(j = 0; j < n; j++){
            scanf("%d",&notas[j]);
            soma += notas[j];
        }
        media = (float) (soma/n);
        for(j = 0; j < n; j++){
            if(notas[j] > media)
                cont++;
        }
        per = (float)((cont/n)*100);
        printf("%.3f%%\n",per);
        per = media = 0;
        soma = cont = 0;

    }

    return 0;
}

