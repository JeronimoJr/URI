#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string texto, descodificada;
    int testes;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> texto;
        for(int j = (int) texto.size()-1; j >= 0; j--){ 
            if(texto[j] >= 'a' && texto[j] <= 'z')
                descodificada += texto[j];
        }
        cout << descodificada << endl;
        descodificada.clear();
    }
    return 0;
}