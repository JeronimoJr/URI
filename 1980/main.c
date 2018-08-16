#include <stdio.h>
#include <string.h>

int main(){
     char palavra[15];
     int i,tam;
     long long fat;
     fat = 1;

     scanf("%s", palavra);
     tam = strlen(palavra);

     while(1){
          if(strcmp(palavra,"0") == 0)
            break;
         for(i = 1; i <= tam; i++)
               fat *= i;
        printf("%lld\n", fat);
         scanf("%s", palavra);

         tam = strlen(palavra);
         fat = 1;
     }
     system("pause");
     return 0;
}
