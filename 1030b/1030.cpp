#include <iostream>
#include <list>
#include <vector>

using namespace std;

int josephus(int pessoas, int salto){
    if(pessoas == 1)
        return 1;
    return (salto - 1 + josephus(pessoas-1, salto)) % pessoas + 1;
}

int main(){
    int testes, pessoas, salto, aux;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> pessoas >> salto;
        aux = josephus(pessoas, salto);
        cout << "Case "<< i+1 <<": " << aux <<endl;
    }
    return 0;
}