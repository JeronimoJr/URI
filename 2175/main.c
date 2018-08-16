#include <stdio.h>

int main(){
    double otavio,bruno, ian;

          scanf("%lf%lf%lf",&otavio,&bruno,&ian);

         if(otavio < bruno && otavio < ian)
            printf("Otavio\n");
         else if(otavio > bruno && bruno < ian)
            printf("Bruno\n");
         else if(ian < bruno && otavio > ian)
            printf("Ian\n");
         else
            printf("Empate\n");

    system("pause");
    return 0;
}
