#include <stdio.h>

int main(int argc, char** argv){
	int p,j1,j2,r,a;

	scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a);

	if(p == 1){
		if((j1+j2) % 2 == 0 && r == 0 && (a == 0 || a == 1)|| r == 1 && a == 0 || r == 0 && a == 1)
			printf("Jogador 1 ganha!\n");
		else 
			printf("Jogador 2 ganha!\n");
	}else{
		if((j1+j2) % 2 != 0 && r == 0 && (a == 0 || a == 1)|| r == 1 && a == 0 || r == 0 && a == 1)
			printf("Jogador 1 ganha!\n");
		else 
			printf("Jogador 2 ganha!\n");
	}
	return 0;
}

