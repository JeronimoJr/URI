#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int testes, ano, temp, aux = 5000;
    string planeta;
    map<int, string> planetas;

    while(cin >> testes){
        if(testes == 0)
            break;
        for(int i = 0; i < testes; i++){
            cin >> planeta >> ano >> temp;
            planetas[ano - temp] = planeta;
            if(ano - temp < aux)
                aux = ano - temp;
        }
        cout << planetas.at(aux) << endl;
        planetas.clear();
        aux = 5000;
    }
    return 0;
}