#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main(){
    list<int> rep;
    list<int> aux2;
    int n, aux, q = 0;

    while(cin >> n){
        if(n == 0)
            break;
        for(int i = 1; i <= n; i++){
            rep.push_back(i);
        }
    while(rep.size() >= 2){
        aux2.push_back(rep.front());
        rep.pop_front();
        aux = rep.front();
        rep.pop_front();
        rep.push_back(aux);
    }
    //aux2.reverse();
    cout << "Discarded cards: ";
        for(auto elem : aux2){
            q++;
            cout << elem;
            if(q == (int)aux2.size())
                break;
            cout << ", ";
        }
        cout << "\n";
        for(auto elem : rep){
            cout << "Remaining card: " << elem << endl;  
        }
        rep.clear();
        aux2.clear();
        q = 0;
    }
    return 0;
}