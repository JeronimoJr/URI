#include <iostream>

using namespace std;

int main(){
    string n;

    while(getline(cin, n)){
        if(n == "esquerda")
            cout << "ingles"<<endl;
        else if(n == "direita")
            cout << "frances"<<endl;
        else if(n == "nenhuma")
            cout << "portugues"<<endl;
        else if(n == "as duas")
            cout << "caiu"<<endl;
    }
    return 0;
}
