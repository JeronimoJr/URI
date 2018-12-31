#include <stdio.h>

int main(){
    int n, cont = 1;

    while(scanf("%d", &n)){
        if(n == -1)
            break;
        printf("Experiment %d: %d full cycle(s)\n", cont, n/2);
        cont++;
    }
    return 0;
}