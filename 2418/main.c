#include <stdio.h>

int main(int argc, char** argv){
    float vet[5],maior,soma,menor;
    int i;
    soma = 0.0;

    for(i = 0; i < 5; i++){
        scanf("%f",&vet[i]);
    }
    maior = menor = vet[0];

    for(i = 0; i < 5; i++){
        if(vet[i] > maior)
            maior = vet[i];
        if(vet[i] < menor)
            menor = vet[i];
        soma += vet[i];
    }

    printf("%.1f\n",(soma-menor-maior));
    return 0;
}
