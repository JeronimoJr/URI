#include <stdio.h>
#include <math.h>

int main(int argc, char** argv){
    double n,menor,maior;
    menor = maior = 0;

    scanf("%lf",&n);

    menor = n/log(n);
    maior = 1.25506 *(n/log(n));
    printf("%.1lf %.1lf\n",menor, maior);

    return 0;
}
