#include <iostream>

using namespace std;

int quantos_divisores(int n){
    int i, cont = 0;

    for(i = 1; i <= n; i++){
        if(n % i == 0)
            cont++;
    }
    return cont;
}

int main(int argc, char** argv){
    int tst,aux,esferas,j,cont,i;
    cont = 0;

    cin>>tst;

    for(i = 0; i < tst; i++){
        cin>>esferas;
        for(j = 2; j <= esferas; j++){
            aux = quantos_divisores(j);
                if(aux % 2 == 0)
                    cont++;
        }
        cout<<cont<<"\n";
        cont = 0;
    }
    return 0;
}
