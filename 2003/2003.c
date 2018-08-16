#include <stdio.h>

int main(int argc, char** argv){
	int h,min;
	char c;
	
	while(scanf("%d %c%d",&h,&c,&min) != EOF){
		if((h == 5) || (h == 6) || (h == 7) && (min == 0))
			printf("Atraso maximo: 0\n");
		else if(h == 8)
			printf("Atraso maximo: %d\n",60+min);
		else if(h == 7 && min > 0)
			printf("Atraso maximo: %d\n",min);	
			else if(h == 9)
			printf("Atraso maximo: %d\n",60+60);	
	}
	
	return 0;
}

