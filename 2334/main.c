#include <stdio.h>

int main(){
    long long unsigned int a;

 scanf("%llu", &a);

   while(a != -1){
      if(a == 0)
         printf("0\n");
      else
         printf("%llu\n",a-1);
   scanf("%llu", &a);
}
    system("pause");
    return 0;
}
