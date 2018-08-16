#include <stdio.h>

int main(){
    double mat1[12][12],soma, media;
    char op;
    int i, j, n, t;

    soma = media = n = 0;
    t = 4;

scanf(" %c", &op);
for(i = 0; i < 12; i++){
          for(j = 0; j < 12; j++){
                scanf("%lf", &mat1[i][j]);
          }
    }

    for(i = 1; i < 11; i++){
        if(i <= 5){
              for(j = 0; j <= 0+n; j++)
                    soma += mat1[i][j];
          n++;
        }
        else if( i > 5 && i < 11){
             for(j = t; j >= 0; j--)
                    soma += mat1[i][j];
            t--;
        }
    }
     if(op == 'M'){
              media = soma/30.0;
              printf("%.1lf\n", media);
          }
  else if(op == 'S')
    printf("%.1lf\n", soma);

     system("pause");
    return 0;
}
