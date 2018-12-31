#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

int main(){
    int testes, salto, pessoas, n = 1, cont = 1;
    list<int> suicidas;

    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> pessoas >> salto; 
        for(int i = 1; i <= pessoas; i++){
            suicidas.push_back(i);
        }
        while(suicidas.size() > 1){
            if(n == salto){
                suicidas.pop_front();
                n = 1;
            }
                suicidas.push_back(suicidas.front());
                suicidas.pop_front();
                n++;
        }            
        for(int elem : suicidas){
            cout << "Case " << cont << ": " << elem << endl;
        }
        suicidas.clear();
        cont++;
    }
}