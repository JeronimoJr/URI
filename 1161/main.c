#include <stdio.h>

long long int fat ( long long int n){
     long long int i, fat;
    fat = 1;

    for(i = 1; i <= n; i++){
          fat *= i;
    }
    return fat;
}

int main(){
   long long int n,t, aux, aux1;

    while (scanf("%lld %lld", &n, &t) != EOF){
        aux = fat(n);
        aux1 = fat(t);
       printf("%lld\n", aux+aux1);
}
    system("pause");
    return 0;
}
