#include <iostream>
using namespace std;

int main(){
    int valor;
    cin >> valor;
    if(valor <= 10)
        cout << "7"<<endl;
    else if(valor > 10 && valor <= 30)
        cout << valor-10 + 7 << endl;
    else if(valor >= 31 && valor <= 100)
        cout << 27 + (valor-30)*2 << endl;
    else
        cout << (valor - 100)*5 + 167 << endl;
    
    return 0;
}