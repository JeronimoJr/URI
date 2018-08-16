#include <stdio.h>

int main(){
    int a, b,aux,cont,ret;
    ret = 1;
    cont = 0;

    scanf("%d%d",&a,&b);
    aux = b - a;

    while(1){
      if(ret > b){
          printf("%d\n", cont);
          break;
      }
      else{
          ret += aux;
          cont++;
      }
    }

    system("pause");
    return 0;
}
