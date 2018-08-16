#include <stdio.h>

int main(){
    int n,m,feed,j,i;

    scanf("%d",&n);

   for(i = 0; i < n; i++){
      scanf("%d",&m);
        for(j = 0; j < m; j++){
           scanf("%d",&feed);
           switch(feed){
             case 1: printf("Rolien\n");
                      break;
             case 2: printf("Naej\n");
                      break;
             case 3: printf("Elehcim\n");
                      break;
             case 4: printf("Odranoel\n");
                      break;
           }
        }
   }

    system("pause");
    return 0;
}
