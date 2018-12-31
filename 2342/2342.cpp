#include <iostream>

using namespace std;

int main(){
    int valor, n1, n2;
    char op;

    cin >> valor;
    cin >> n1 >> op >> n2;
switch (op){
    case '+':
        if(n1 + n2 > valor)
            cout << "OVERFLOW"<<endl;
        else
            cout << "OK" << endl;
        break;
    case '*':
        if(n1 * n2 > valor)
             cout << "OVERFLOW"<<endl;
        else
            cout << "OK" << endl;
    default:
        break;
}
    return 0;
}