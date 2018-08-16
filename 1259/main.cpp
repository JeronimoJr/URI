#include <iostream>
#include <list>
#include <vector>

using namespace std;

void mostrar(list<int> lista){
    for(auto it = lista.begin(); it != lista.end(); it++)
        cout <<*it<<"\n";
}

int main(){

    int n,a;
    list<int> listaPar;
    list<int> listaImpar;
    cin>> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a % 2 == 0)
            listaPar.push_back(a);
        else
            listaImpar.push_back(a);
    }

    listaImpar.sort();
    listaImpar.reverse();
    listaPar.sort();

    mostrar(listaPar);
    mostrar(listaImpar);

    return 0;
}
