#include <stdio.h>

int main(){
    int vet[15], par[5],impar[5], j, t, i, q, x;
    j = t = q = x = 0;

    for(i = 0; i < 15; i++)
          scanf("%d", &vet[i]);

    for(i = 0; i < 15; i++){
      if(vet[i] % 2 == 0){
          par[j] = vet[i];
          j++;
          q++;
      if(j == 5){
        for(j = 0; j < q; j++)
            printf("par[%d] = %d\n", j, par[j]);
            q = j = 0;
        }
      }
      else{
        impar[t] = vet[i];
          t++;
          x++;
          if(t == 5){
            for(t = 0; t < x; t++)
                  printf("impar[%d] = %d\n", t, impar[t]);

          x =  t = 0;
          }

      }

}
      for(t = 0; t < x; t++)
             printf("impar[%d] = %d\n", t, impar[t]);

      for(j = 0; j < q; j++)
         printf("par[%d] = %d\n", j, par[j]);

   system("pause");
    return 0;
}
