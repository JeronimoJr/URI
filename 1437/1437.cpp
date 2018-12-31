#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int testes, soma = 0;
    string op;
    string sentido("NLSO");
    string inverso("NOSL");
    
    while(cin >> testes){
        if(testes == 0)
            break;
        cin >> op;
        for(int i = 0; i < (int)op.size(); i++){
            if(op[i] == 'D')
                soma += 1;
            else
                soma -= 1;
        }
        if(soma >= 0)
            cout << sentido[abs(soma % 4)]<< endl;
        else
            cout << inverso[abs(soma % 4)]<< endl;
        soma = 0;
    }
    
    return 0;
}