#include <stdio.h>

int main(){
    int m, n, vet[1000], i,soma, j, cont, maior;
    maior = soma = j = cont = 0;

    while(scanf("%d%d",&n,&m) != EOF){
           for(i = 0; i < n; i++)
             scanf("%d",&vet[i]);


         while(cont != m){
               for(i = 0; i < n; i++){
                     if(vet[i] > maior){
                        maior = vet[i];
                        j = i;
                     }
               }
               vet[j] *= 0;
               soma += maior;
               maior = 0;
               cont++;
         }
       printf("%d\n",soma);
       soma = cont = 0;
    }

    system("pause");
    return 0;
}
