#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    //map<string, string> rep;
    vector<string> rep;
    int op, aux1, aux2;
    aux1 = aux2 = 0;
     cin >> op;
    for(int i = 0; i < op; i++){
        string comportamento, nome;
        cin >> comportamento >> nome;
        if(comportamento == "+")
            aux1++;
        else
            aux2++;
        rep.push_back(nome);
    }
    std::sort(rep.begin(), rep.end());
    for(auto elem : rep)
        cout << elem << endl;

    cout << "Se comportaram: " << aux1 << " | "
    << "Não se comportaram: " << aux2 << endl;

    return 0;
}