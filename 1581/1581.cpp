#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int op1, op2;
    string lingua, aux;
    bool flag = true;
    vector<string> linguas;

    cin >> op1;
    for(int i = 0; i < op1; i++){
        cin >> op2;
        for(int j = 0; j < op2; j++){
            cin >> lingua;
            linguas.push_back(lingua);
        }
        aux += linguas[0];
        for(int j = 1; j < op2; j++){
            if(aux != linguas[j]){
                flag = false;
                break;
            }
        }
        if(flag)
            cout << aux << endl;
        else
            cout << "ingles" << endl;
        linguas.clear();
        aux.clear();
        flag = true;
    }
    return 0;
}
