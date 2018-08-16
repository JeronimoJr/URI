#include <stdio.h>

int main(){
    int n,i,vis,man,j,man2,vis2;
    char c;

    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d %c%d%d %c%d",&man,&c,&vis,&vis2,&c,&man2);

        if(man+man2 > vis+vis2)
            printf("Time 1\n");
        else if(vis+vis2 > man+man2)
            printf("Time 2\n");
        else if(vis+vis2 == man+man2)
         if(man2 > vis)
            printf("Time 1\n");
         else if(man2 < vis)
            printf("Time 2\n");
         else
            printf("Penaltis\n");
    }

    system("pause");
    return 0;
}
