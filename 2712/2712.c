#include <stdio.h>
#include <string.h>
#include <ctype.h>
int tamanho(char placa[]){
	int tam;
	tam = strlen(placa);
	if(tam != 8)
		return 0;
	return 1;
}
int hifen(char placa[]){
	int i;
	for(i = 0; placa[i] != '\0'; i++){
		if((i = 3) && (placa[i] == '-'))
			return 1;
		else 
			return 0;
	}
}
int maiuscula(char placa[]){
	int i;
	for(i = 0; i < 3; i++){
		if(placa[i] < 'A' || placa[i] > 'Z')
			return 0;
	}
	return 1;
}
int numeros(char placa[]){
	int i,tam;
	tam = strlen(placa);
	
	for(i = tam-1; i > 3; i--){
			if(isdigit(placa[i]) == 0)
				return 0;		
	}	
	return 1;
}
int main(int argc, char** argv){
	char placa[81];
	int tst,i,tam;
	
	
	scanf("%d",&tst);
	for(i = 0; i < tst; i++){
	scanf("%s",placa);
	tam = strlen(placa);
	if(numeros(placa) == 0 || tamanho(placa) == 0 || hifen(placa) == 0 || maiuscula(placa) == 0)
		printf("FAILURE\n");
	else{
		if(placa[tam-1] == '1' || placa[tam-1] == '2')
			printf("MONDAY\n");
		else if(placa[tam-1] == '3' || placa[tam-1] == '4')	
			printf("TUESDAY\n");
		else if(placa[tam-1] == '5' || placa[tam-1] == '6')	
			printf("WEDNESDAY\n");
		else if(placa[tam-1] == '7' || placa[tam-1] == '8')
				printf("THURSDAY\n");
		else if(placa[tam-1] == '9' || placa[tam-1] == '0')	
				printf("FRIDAY\n");	
		}
	}
	
	return 0;
}

