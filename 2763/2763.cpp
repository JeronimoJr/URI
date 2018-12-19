#include <iostream>

using namespace std;

int main(){
    string cpf, aux;

    while(cin >> cpf){
        aux = cpf.substr(0,3);
        cout << aux << endl;
        aux = cpf.substr(4,3);
        cout << aux << endl;
        aux = cpf.substr(8,3);
        cout << aux << endl;
        aux = cpf.substr(12);
        cout << aux << endl;
    }
    return 0;
}