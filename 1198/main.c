#include <stdio.h>

int main(){
   long long int s, o;

    while(scanf("%lld%lld", &s,&o) != EOF){
        if(s <= o)
            printf("%lld\n", o-s);
        else
            printf("%lld\n", s - o);
    }

    system("pause");
    return 0;
}
