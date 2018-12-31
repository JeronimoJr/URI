#include <iostream>
#include <string>
using namespace std;

int main(){
    int val1, val2;
    string resultado, aux;

    while(cin >> val1 >> val2){
        if((val1+val2) == 0)
            break;
            
        resultado = to_string(val1+val2);
        for(int i = 0; i < (int) resultado.size(); i++){
            if(resultado[i] != '0')
                aux += resultado[i];
        }
        cout << aux << endl;
        aux.clear();
    }
    return 0;
}