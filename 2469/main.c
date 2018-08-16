#include <stdio.h>

int main(int argc, char** argv){
    int vet[1000],i,n,cont,j,qtd,aux,maior;
    cont = j = 0;

    scanf("%d",&n);
    for(i = 0; i < n; i++)
        scanf("%d",&vet[i]);


    while(j != n){
        for(i = 0; i < n; i++){
            if (vet[j] == vet[i])
                cont++;
        }
        if(j == 0){
            maior = vet[j];
            aux = cont;
        }
        if(j > 0){
            if(cont > aux){
                aux = cont;
                maior = vet[j];
            }
            else if(cont == aux && vet[j] > maior){
                aux = cont;
                maior = vet[j];
            }
        }
        cont = 0;
        j++;
    }

    printf("%d\n",maior);
    return 0;
}
