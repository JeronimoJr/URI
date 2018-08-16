#include <stdio.h>

int main(){
    int teste, a, b, cont,i, qtd;
    cont = qtd = 0;

    scanf("%d", &teste);

    while(teste > 0){
        for(i = 0; i < teste; i++){
          scanf("%d%d",&a,&b);
               if(a > b)
                  cont++;
               else if(b > a)
                   qtd++;
        }
        printf("%d %d\n", cont, qtd);
        cont = qtd = 0;
        scanf("%d", &teste);
    }

    system("pause");
    return 0;
}
