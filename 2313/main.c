#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c,aux;

    scanf("%d%d%d", &a, &b, &c);

    if(b >= c && b > a){
         aux = a;
         a = b;
         b = aux;
    }
    else if (c > b && c > a){
         aux = a;
         a = c;
         c = aux;
    }

    if(a < b+c && b < a+c && c < a+b){
         if( (a == b) && (b == c))
             printf("Valido-Equilatero\n");
         else if ( a != b && a != c && c != b )
             printf("Valido-Escaleno\n");
         else
               printf("Valido-Isoceles\n");
         if(pow(a,2) == pow(b,2)+ pow(c,2))
            printf("Retangulo: S\n");
         else
            printf("Retangulo: N\n");
    }
    else
        printf("Invalido\n");

    system("pause");
    return 0;
}
