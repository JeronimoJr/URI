#include <stdio.h>

int main(int argc, char** argv){
    int n, vet[1000],maior,a,j,i;
    a = j = 0;

    do{
        scanf("%d",&n);
        if(n == 0)
            break;
        for(i = 1; i <= n; i++)
            scanf("%d",&vet[i]);

        maior = vet[1];
        while(1){
            for(i = 1; i <= n; i++){
                if(vet[i] >= maior){
                    maior = vet[i];
                    j = i;
                }
            }
                a++;
            if(a == 2)
                break;
            vet[j] = 0;
            maior = -1;
        }
        printf("%d\n",j);
        a = 0;
    }while(1);

    return 0;
}
