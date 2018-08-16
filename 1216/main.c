#include <stdio.h>
#include <string.h>

int main(void){
    char name[1000];
    double dis, res = 0;
    int cont = 0;

    while (gets(name) != EOF && scanf("%lf", &dis) != EOF){
       if(dis == 0)
           break;
        res += dis;
        cont++;
    }

    printf("%.1lf\n", res/cont);

    return 0;
}

