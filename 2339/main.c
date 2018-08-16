#include <stdio.h>

int main(int argc, char** argv){
    int c,p,f;

   scanf("%d%d%d",&c,&p,&f);
    if((p/f) >= c)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
