#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include <istream>
#include <sstream>
using namespace std;

int main(){
    string two, aux;
    char one;
    int cont = 0, number = 0; 

    while(cin >> one >> two){
        if(one == '0' && two == "0")
            break;
        for(int i = 0; i < (int)two.size(); i++){
            if(two[i] != one){
                aux += two[i];
                cont++;
            }
        }
        if(cont == 0)
            cout << "0" <<endl;
        else{
            cont = 0;
           for(int i = 0; i < (int) aux.size(); i++){
               number = i;
               if(aux[i] == '0')
                    continue;
                else{
                    for(int j = number; j < (int)aux.size(); j++){
                        cout << aux[j];
                        cont++;
                    } 
                    cout <<endl;
                    break;
                }
           }
           if(cont == 0)
            cout <<"0"<<endl;
        }
        aux.clear();
        cont = 0;
        number = 0;
    }
    return 0;
}