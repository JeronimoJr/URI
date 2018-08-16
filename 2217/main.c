#include <stdio.h>
#include <math.h>

int main(int argc, char** argv){
    long long int n,m,i,aux;
    aux = 0;

    scanf("%lld",&n);
    for(i = 0; i < n; i++){
        scanf("%lld",&m);
        if(m % 2 == 0)
            printf("1\n");
        else
            printf("9\n");
    }


    return 0;
}
