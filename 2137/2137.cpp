#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> codigos;
    vector<string> aux;
    int op;
    string cod;
    while(cin >> op){
        for(int i = 0; i < op; i++){
            cin >> cod;
            codigos.push_back(cod);
        }
        std::sort(codigos.begin(), codigos.end());  
        for(int i = 0; i < codigos.size(); i++){
            cout << codigos[i] << endl;
        }
        codigos.clear();
    }
    return 0;
}