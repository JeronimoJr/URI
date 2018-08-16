#include <stdio.h>

int main(){
    char nome[300];
    int i,teste;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++)
          gets(nome);

    printf("Ciencia da Computacao\n");

    system("pause");
    return 0;
}

