#include <stdio.h>
#include <string.h>

int main(){
    char nome[300];
    int i,n,teste;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
          scanf("%s%d",nome,&n);
          if(strcmp(nome,"Thor") == 0)
            printf("Y\n");
          else
            printf("N\n");
    }

    system("pause");
    return 0;
}
