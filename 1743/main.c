#include <stdio.h>

int main(){
    int vet[5], vt[5],cont, i;
    cont = 0;

    for(i = 0; i < 5; i++)
          scanf("%d", &vet[i]);

    for(i = 0; i < 5; i++)
          scanf("%d", &vt[i]);

    for(i = 0; i < 5; i++){
          if(vet[i] == vt[i])
             cont++;
    }
    if(cont > 0)
        printf("N\n");
    else
        printf("Y\n");

    system("pause");
    return 0;
}
