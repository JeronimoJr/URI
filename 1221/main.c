#include <math.h>

int main(){
    long long int n;
    int i,tst,cont,flag;
    cont = 2;
    flag = 0;

    scanf("%d",&tst);

    for(i = 0; i < tst; i++){
        scanf("%lld",&n);

        while(cont <= sqrt(n)){
            if(n % cont == 0){
                printf("Not Prime\n");
                flag = 1;
                break;
            }
            cont++;
        }
        if(flag == 0)
            printf("Prime\n");
        flag = 0;
        cont = 2;
    }


    return 0;
}
