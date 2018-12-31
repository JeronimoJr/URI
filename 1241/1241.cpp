#include <iostream>
#include <vector>
#include <algorithm>
#include <ctype.h>

using namespace std;

bool encaixa(string val1, string val2){
    string aux;
    if(val1.size() < val2.size())
        return false;
  aux = val1.substr(val1.size()-val2.size()); 
    if(val2 == aux)
        return true;
    return false;
}

int main(){
    int testes;
    string val1, val2, aux;

    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> val1 >> val2;

       if(encaixa(val1, val2))
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;  
    }
    return 0;
}