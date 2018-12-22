#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

bool gattaca(string dna, string cod){
    if(cod.size() > dna.size())
        return false;
    if(dna == cod)
        return true;
    for(int i = 1; i <= dna.size()-cod.size(); i++){    
            if(cod == dna.substr(i,cod.size()) && !(i+cod.size() > dna.size())) 
                return true;
    }
    return false;
}

int main(){
    string dna, cod;

    while(cin >> dna >> cod){
        if(gattaca(dna,cod))
            cout << "Resistente"<<endl;
        else
            cout << "Nao resistente"<<endl;
    }
    return 0;
}