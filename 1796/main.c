#include <stdio.h>

int main(){
    int n, i,a,cont, qtd;
    cont = qtd = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
      scanf("%d", &a);
          if(a == 0)
            cont++;
          else
            qtd++;
    }

    if(cont > qtd)
        printf("Y\n");
    else
        printf("N\n");

    system("pause");
    return 0;
}
