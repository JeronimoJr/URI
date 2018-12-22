#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int testes;
    string pokemon;
    map<string, string> rep;

    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> pokemon;
        rep[pokemon] = pokemon;
    }
    cout << "Falta(m) " << 151-rep.size() << " pomekon(s)." << endl;
    return 0;
}