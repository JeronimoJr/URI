#include <stdio.h>
int main(){
    double n,t,p;
       t = p = 0.0;
    scanf("%lf",&n);

    if(n >= 0.00 && n <= 2000.00)
        printf("Isento\n");
    else if(n >= 2000.01 && n <= 3000.00){
              n = n-2000.00;
              printf("R$ %.2lf\n",n*0.08);
    }
    else if(n >= 3000.01 && n <= 4500.00){
        t = n-3000.01;
        n = n-2000-t;
        t = t*0.18;
        n = n *0.08;
        printf("R$ %.2lf\n",n+t);
    }
    else{
        t = n - 4500.00; /// t = 1500,  p = 1500;
         p = n-t-3000.01;
         p = p *0.18;      // 5000 -. 500   de imposto,, 4500
        n = 999.99*0.08;
        t = t * 0.28;
        printf("R$ %.2lf\n",t+p+n);

    }
return 0;
}
