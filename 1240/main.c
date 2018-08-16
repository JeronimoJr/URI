#include <stdio.h>

int conta (long long int b){
     long long int c = 0;

     do{
         c = c + 1;
          b = b/ 10;
    }while (b != 0);

       return c;
  }


int main(int argc, char** argv){
    long long int a,b,teste,aux,aux2,aux3,qtd ,cont, i;
    cont = qtd = 0;

    scanf("%lld",&teste);

    for(i = 0; i < teste; i++){
        scanf("%lld%lld",&a,&b);
        aux = conta(b);
        while(cont != aux){
              aux2 = b % 10;
              aux3 = a % 10;
              if(aux2 != aux3){
                      qtd++;
                      printf("nao encaixa\n");
                      break;
              }
              b = b/10;
              a = a/10;
              cont++;
        }
        if(cont == aux && qtd == 0)
                printf("encaixa\n");

        cont = qtd = 0;
    }



    system("pause");
    return 0;
}

