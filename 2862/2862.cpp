#include <iostream>
 
using namespace std;
 
int main() {
    long long int n, testes;
    cin >> testes;
    
    for(int i = 0; i < testes; i++){
        cin >> n;
        if(n > 8000)
            cout << "Mais de 8000!"<<endl;
        else
            cout << "Inseto!"<<endl;
    }
    return 0;
}