#include <stdio.h>

int main(){
    int teste, i,cont;
    float peso, j;
    cont = 0;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
         scanf("%f", &peso);
            for(j = peso; j > 1; j = j/2)
              cont++;

          printf("%d dias\n", cont);
          cont = 0;
    }

    return 0;
}
