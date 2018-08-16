#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
	  char park[81]; 
	   int sal,vue,quant,saida,volta;
	   sal = vue = saida = volta = 0;
	   
	   	while(1){
	   	scanf(" %s",park);
	   	if(strcmp(park,"ABEND") == 0)
			break; 
			scanf("%d",&quant);
		    if(strcmp(park,"SALIDA") == 0){
		   		saida += quant;
			   sal++;
		   }else if(strcmp(park,"VUELTA") == 0){
		   	volta += quant;
			   vue++;
		   }	
			   
		}
	   	printf("%d\n",saida-volta);
	   	printf("%d\n",sal-vue);
	   	
	return 0;
}

