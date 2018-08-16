#include <stdio.h>

int main(){
    int jog, voto, cont,i;
    cont = 0;

    while(scanf("%d",&jog) != EOF){
         for(i = 0; i < jog; i++){
           scanf("%d", &voto);
                if(voto == 1)
                    cont++;
         }
         if(cont >= (float) ((2.0/3.0)*jog))
            printf("impeachment\n");
         else if(cont < (float)((2.0/3.0)*jog))
            printf("acusacao arquivada\n");
         cont = 0;
    }
    system("pause");
    return 0;
}
