#include <stdio.h>

int main(){
    int p1,c1,p2,c2;

    scanf("%d%d%d%d", &p1, &c1, &p2, &c2);

    if( p1 * c1 == p2 * c2)
       printf("0\n");
    else if(p2 * c2 > p1 * c1)
        printf("1\n");
    else
        printf("-1\n");

  system("pause");
  return 0;
}
