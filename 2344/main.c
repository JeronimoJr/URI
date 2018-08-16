#include <stdio.h>

int main(int argc, char** argv){
    int n;

    scanf("%d",&n);

    if(n <= 100 && n >= 86)
        printf("A\n");
    else if(n >= 61 && n <= 85)
        printf("B\n");
    else if(n >= 36 && n <= 60)
        printf("C\n");
    else if(n >= 1 && n <= 35)
        printf("D\n");
    else
        printf("E\n");

    return 0;
}
