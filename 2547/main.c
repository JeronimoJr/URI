#include <stdio.h>

int main(){
    int t, ami, amx,i,alt, cont;
    cont = 0;

    while(scanf("%d%d%d", &t, &ami,&amx) != EOF){
         for(i = 0; i < t; i++){
           scanf("%d",&alt);
               if(alt >= ami && alt <= amx)
                    cont++;
         }
            printf("%d\n", cont);
            cont = 0;
    }
    return 0;
}

