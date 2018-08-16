#include <stdio.h>

int main(int argc, char** argv){
    int n, i, j,theon,vet[1000],menor;
    theon = 0;
    scanf("%d",&n);

    for(i = 0; i < n; i++)
        scanf("%d",&vet[i]);

    menor = vet[0];
    for(j = 0; j < n; j++){
       if(vet[j] < menor){
        menor = vet[j];
        theon = j;
       }
    }

    printf("%d\n",theon+1);

    return 0;
}
