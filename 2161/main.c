#include <stdio.h>
#include <stdio.h>

int main(int argc, char** argv){
    double soma,n;
    int i;
    soma = 0.0;

    scanf("%lf",&n);

    for(i = 0; i < n; i++){
        soma += 6.0;
        soma = 1.0/soma;
    }
    soma += 3.0;
    printf("%.10lf\n",soma);

    return 0;
}
