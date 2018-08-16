#include <stdio.h>

int main(){
    int x,y,teste,i;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
          scanf("%d%d",&x,&y);
          printf("%d cm2\n", (x*y)/2);
    }
    system("pause");
    return 0;
}
