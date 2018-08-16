#include <stdio.h>

int main(){
    int teste, cont,i;
    char nome[81];
    float maior, menor, soma,grau,nota[200];
    cont = 0;
    soma = 0;

    scanf("%d",&teste);

    while (cont != teste){
            scanf("%s",nome);
            scanf("%f",&grau);

            for(i = 0; i < 7; i++)
                scanf("%f", &nota[i]);

            maior = menor = nota[0];

            for(i = 0; i < 7; i++){
                if(nota[i] > maior)
                    maior = nota[i];
                if(nota[i] < menor)
                    menor = nota[i];
                soma += nota[i];
            }
            soma = soma - menor - maior;
            soma = soma * grau;
            printf("%s %.2f\n", nome,soma);
            cont++;
            soma = 0;
    }

system("pause");
return 0;
}
