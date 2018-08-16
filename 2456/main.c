#include <stdio.h>

int main(int argc, char** argv){
    int a,b,c,d,e;

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a == b && b == c && c == d && e == d)
        printf("N\n");
    else if(a <= b && b <= c && c <= d && d <= e)
        printf("C\n");
    else if(a >= b && b >= c && c >= d && d >= e)
        printf("D\n");
    else
        printf("N\n");

    return 0;
}
