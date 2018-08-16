#include <stdio.h>

int main(int argc, char** argv){
    int tst,n,i;

    scanf("%d",&tst);
    for(i = 0; i < tst; i++){
        scanf("%d",&n);
        if(n % 2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }
        return 0;
}
