#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(){
    vector<string> rep;
    string aux;
    bool flag = true; 
    
    while(cin >> aux){
        for (int i = 0; i < (int) aux.length(); i++){
            if(aux[i] == '(')
                rep.push_back("(");
            else if(aux[i] == ')'){
                if(rep.empty())
                    flag = false;
                else
                    rep.pop_back();
            }
        }
        if(rep.empty() && flag)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
        flag = true;
        rep.clear();
    }
    return 0;
}

