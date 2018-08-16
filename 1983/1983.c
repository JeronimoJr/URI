#include <stdio.h>

int main(int argc, char** argv){
	int tst,num,cont,i,aux;
	float nota,maior;
	num = cont =  0;
	maior = 0.0;
	scanf("%d",&tst);
	
	for(i = 0; i < tst; i++){
		scanf("%d %f",&num,&nota);
		if(nota >= 8.0 && nota > maior){
			aux = num;
			maior = nota;
			cont++;
		}
	}
	if(cont == 0)
		printf("Minimum note not reached\n");
	else 
		printf("%d\n",aux);
	
	return 0;
}
