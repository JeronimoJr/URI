#include <stdio.h>

int main(){
    int teste,i,n, maior;
    maior = 0;

    while(scanf("%d", &teste) != EOF){
        for(i = 0; i < teste; i++){
            scanf("%d",&n);
              if(n > maior)
                maior = n;
        }
        if(maior < 10)
            printf("1\n");
        else if(maior >= 10 && maior < 20)
            printf("2\n");
        else
            printf("3\n");

        maior = 0;
  }

  system("pause");
  return 0;
}
