#include <stdio.h>
#include <math.h>

int main(){
    long long int n;
    int cont,flag;
    cont = 2;
    flag = 0;

        scanf("%lld",&n);

        while(cont <= sqrt(n)){
            if(n % cont == 0){
                printf("S\n");
                flag = 1;
                break;
            }
            cont++;
        }
        if(flag == 0)
            printf("N\n");

    return 0;
}
