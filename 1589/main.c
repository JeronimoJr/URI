#include <stdio.h>

void conduite(int teste){
    int i, soma, r1, r2;
    soma = 0;

    for(i = 0; i < teste; i++){
          scanf("%d%d", &r1, &r2);
          soma += r1 + r2;
          printf("%d\n", soma);
          soma = 0;
    }
}
int main(){
    int teste;

    scanf("%d", &teste);
    conduite(teste);

    system("pause");
    return 0;
}

