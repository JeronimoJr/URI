#include <iostream>
#include <map>
using namespace std;

int main(){
    int testes;
    map<int, int> mapa;
    int value;

    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> value;
        mapa[value] = value;
    }
    cout << (int)mapa.size() << endl;
    return 0;
}