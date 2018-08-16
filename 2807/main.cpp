#include <iostream>
#include <list>

using namespace std;

void mostrar(std::list<int> &lista){
    int cont = 1;
    for(int x : lista){
        std::cout << x;
        if(cont == lista.size())
            break;
        cont++;
        std::cout<<" ";
    }
    //std::cout << "\n";
}

int main(){
  int a, b, n,aux = 0;
  a = b = 1;

list<int> lista;

  cin >> n;
  for (int i = 1; i <= n; i++){
       lista.push_back(a);
            aux = a;
            a = b;
            b = b + aux;
        }

lista.reverse();
mostrar(lista);
    cout <<"\n";
    return 0;
}


