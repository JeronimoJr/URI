#include <stdio.h>

int main(){
    int l,r;

      scanf("%d%d", &l, &r);
    while(l > 0 && r > 0){
        printf("%d\n", l+r);
        scanf("%d%d", &l, &r);
    }

    system("pause");
    return 0;
}
