#include <stdio.h>

int main(){
    int x;
    long long int exp;

    while (x != 0 && exp != 0){
       scanf("%d%lld",&x, &exp);

      if(x == 0 && exp == 0)
          break;
       printf("%lld\n", x*exp);
    }

    system("pause");
    return 0;
}
