#include <stdio.h>

int main(int argc, char** argv){
    int vet[10],vet1[10],i,j,cont;
    j = cont = 0;

    for(i = 0; i < 6; i++)
        scanf("%d",&vet1[i]);

    for(i = 0; i < 6; i++)
        scanf("%d",&vet[i]);

    while(j != 6){
        for(i = 0; i < 6; i++){
            if(vet[j] == vet1[i]){
                cont++;
                break;
            }
        }
        j++;
    }

    if(cont == 3)
        printf("terno\n");
    else if(cont == 4)
        printf("quadra\n");
    else if (cont == 5)
        printf("quina\n");
    else if (cont == 6)
        printf("sena\n");
    else if(cont < 3)
        printf("azar\n");

    return 0;
}
