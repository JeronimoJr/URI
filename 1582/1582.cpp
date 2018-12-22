#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

bool tripla(int a, int b, int c){
    if( pow(a,2) != (pow(b,2) + pow(c,2)))
        return false;
    return true;
}
int mdc(int a, int b){
    if(b == 0)
        return a;
    return mdc(b, a % b);
}

int main(){
    vector<int> vet;
    int a, b, c, aux, aux2;
    bool flag = false;
    
    while(cin >> a >> b >> c){
        vet.push_back(a);
        vet.push_back(b);
        vet.push_back(c);
        sort(vet.begin(), vet.end());

        aux = mdc(vet[2], vet[1]);
        aux2 = mdc(max(aux,vet[0]), min(aux, vet[0])); 
        flag = tripla(vet[2], vet[1], vet[0]);
       if( flag && (aux2 == 1))
            cout << "tripla pitagorica primitiva" << endl;
        else if(flag)
             cout << "tripla pitagorica" << endl;
        else
            cout << "tripla" << endl;
        vet.clear(); 
    }
    return 0;
}