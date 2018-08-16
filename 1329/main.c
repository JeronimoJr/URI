#include <stdio.h>

int main(){
    int a, n, i, maria, joao;
    maria = joao = 0;

    scanf("%d", &n);

    while(n > 0){
        for(i = 0; i < n; i++){
           scanf("%d", &a);
           if(a == 0)
                maria++;
           else if(a == 1)
                joao++;
        }
        printf("Mary won %d times and John won %d times\n", maria, joao);
        maria = joao = 0;
     scanf("%d", &n);
    }
    system("pause");
    return;
}
