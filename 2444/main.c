#include <stdio.h>

int main(int argc, char** argv){
    int vi, tr,i,n;

    scanf("%d%d",&vi,&tr);
    for(i = 0; i < tr; i++){
           scanf("%d",&n);
           vi += n;
           if(vi > 100)
               vi = vi -(vi - 100);
           else if(vi < 0)
               vi = 0;

    }

    printf("%d\n",vi);

    return 0;
}
