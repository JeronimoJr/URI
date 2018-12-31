#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
    int testes;
    double  a, b, c;
    double trs, delta;

    cin >> testes;
    for(int i = 0; i < testes; i++){
          cin >> a >> b >> c;
        delta = (pow(b, 2) - (4*(a)*(c)));
        trs = -(delta/(4.0*a));
        if(trs >= 0)
            printf("%.2f\n", trs);
        else
            printf("%.2f\n", -1*trs);
    }

    return 0;
}