#include <stdio.h>

int main(){
	int n,i;
	double ataque,saque, bloqueio,a,a1,s,s1,b,b1,saques,ataques,bloqueios;
	char nome[81];
	bloqueio = bloqueios = ataque = ataques = saque = saques = 0.0;
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){
		scanf("%81s[^\n]",nome);
		scanf(" %lf %lf %lf",&s,&b,&a);
		scanf(" %lf %lf %lf",&s1,&b1,&a1);
		saques += s1;
		bloqueios += b1;
		ataques += a1;
		saque += s;
		bloqueio += b;
		ataque += a;
	}
	
	printf("Pontos de Saque: %.2lf %%.\n",(saques/saque)*100);
	printf("Pontos de Bloqueio: %.2lf %%.\n",(bloqueios/bloqueio)*100);
	printf("Pontos de Ataque: %.2lf %%.\n",(ataques/ataque)*100);
	return 0;
}

