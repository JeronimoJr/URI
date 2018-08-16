#include <stdio.h>

int main(){
   char nome[100000];
  int i, cont,j,q,t;
  cont = q = j = t = 0;

       gets(nome);

       for(i = 0; nome[i] != '\0'; i++){
          if(nome[j] == 'z' || nome[j] == 'Z'){
                     j++;
                     q++;
            if(nome[j] == 'e' || nome[j] == 'E'){
                       j++;
                       q++;
                  if(nome[j] == 'l' || nome[j] == 'L'){
                          j++;
                          q++;
                     if(nome[j] == 'd' || nome[j] == 'D'){
                          j++;
                          q++;
                        if(nome[j] == 'a' || nome[j] == 'A'){
                             cont++;
                         }
                        }
                     }
                  }
               }
               j = j-q;
               t++;
               j = t;
       }

       if(cont > 0)
            printf("Link Bolado\n");
       else
            printf("Link Tranquilo\n");

    system("pause");
    return 0;
}
