#include <stdio.h>

int main(int argc, char** argv){
    int maior,a,b,c;


    scanf("%d%d%d",&a,&b,&c);
    if(a > b && a > c && b > c){
        maior = b;
    }
    else if(a > b && a > c && b < c){
        maior = c;
    }
    else if(b > a && b > c && a > c){
        maior = a;
    }
    else if(b > a && b > c && a < c){
        maior = c;
    }
    else if(c > b && a < c && b > a){
        maior = b;
    }
    else if(c > b && a < c && b < a){
        maior = a;
    }

    printf("%d\n",maior);

    return 0;
}
