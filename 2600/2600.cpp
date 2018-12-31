#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int qtd, a,b,c,d,e,f;
    map<int, int> map;

    cin >> qtd; 
    for(int i = 0; i < qtd; i++){
        cin >> a;
        map[a] = a;
        cin >> b >> c >> d >> e;
         map[b] = b;
         map[c] = c;
         map[d] = d;
         map[e] = e;
         cin >> f;
         map[f] = f;
        if(map.size() < 6 || map.count(0))
            cout << "NAO"<<endl;
        else if((map[a]+map[f] == 7) && (map[b]+map[d] == 7) && (map[c]+map[e] == 7))
            cout << "SIM"<<endl;
        else
            cout<<"NAO"<<endl;
        map.clear();
    }
    return 0;
}