#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int a,b,tst,i,maior,menor,resto;

    cin >>tst;

    for(i = 0; i < tst; i++){
        cin>> a >> b;
        maior = a;
        menor = b;
        if(b > a){
            maior = b;
            menor = a;
        }
        while(1){
            resto = maior%menor;
            maior = menor;
            menor = resto;
            if(resto == 0)
                break;
        }
        cout<<maior<<endl;
    }

    return 0;
}
