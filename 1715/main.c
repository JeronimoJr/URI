#include <stdio.h>

int main(){
    int mat[110][110],cont, aux,n,m,i,j;
    cont = aux = 0;

    scanf("%d%d",&n,&m);

   for(i = 0; i < n; i++){
         for(j = 0; j < m; j++)
           scanf("%d",&mat[i][j]);

   }


    for(i = 0; i < n; i++){
          for(j = 0; j < m; j++){
                if(mat[i][j] == 0)
                    cont++;
          }
          if(cont == 0)
            aux++;
          cont = 0;
    }

    printf("%d\n",aux);

    system("pause");
    return 0;
}
