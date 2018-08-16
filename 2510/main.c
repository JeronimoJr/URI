#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    int n,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++){
      scanf("%s",nome);
        if(strcmp(nome,"Batmain") == 0)
            printf("N\n");
        else
            printf("Y\n");
    }

    system("pause");
    return 0;
}
