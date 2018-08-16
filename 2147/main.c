#include <stdio.h>
#include <string.h>

int main(){
    int c,i;
    char nome[12000];

    scanf("%d",&c);

    for(i = 0; i < c; i++){
        scanf("%s", nome);
        printf("%.2f\n", (float)strlen(nome)/100);
    }

    system("pause");
    return 0;
}

