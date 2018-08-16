#include <stdio.h>

int main(){
    long long unsigned num,aux;

    scanf("%llu",&num);

    do{
       aux = num % 10;
        printf("%llu",aux);

       num = num/10;
    }while(num != 0);
     printf("\n");

    system("pause");
    return 0;
}
