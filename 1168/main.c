#include <stdio.h>

int main(){
    char nome[200];
    int i, soma,j ,teste;
    soma = 0;

    scanf("%d", &teste);

  for(j = 0; j < teste; j++){
    scanf("%s", nome);
        for(i = 0; nome[i] != '\0'; i++){
          if(nome[i] == '2' || nome[i] == '3' || nome[i] == '5')
            soma += 5;
          else if(nome[i] == '0' || nome[i] == '9' || nome[i] == '6')
            soma += 6;
          else if(nome[i] == '4')
            soma += 4;
          else if(nome[i] == '1')
            soma += 2;
          else if(nome[i] == '7')
            soma += 3;
          else if(nome[i] == '8')
            soma += 7;
        }
    printf("%d leds\n",soma);
    soma = 0;
}
    system("pause");
    return 0;
}
