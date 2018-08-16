#include <iostream>

using namespace std;

int fatorial(int n){
    int fat = 1;
    for(int i = 1; i <= n; i++)
        fat = fat*i;
    return fat;
}

int modelar(int n){
    int i = 1, soma = 0;
    while(n != 0){
        soma += (n % 10) * fatorial(i);
        i++;
        n = n/10;
    }
    return soma;
}

int main(){
    int n;

    while(1){
        cin>>n;
        if(n == 0)
            break;
        cout<< modelar(n)<<"\n";

    }
    return 0;
}
