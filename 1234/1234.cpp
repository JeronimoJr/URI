#include <iostream>
#include <string>
#include <string.h>
#include <cctype>
#include <istream>
using namespace std;

int main(){
   string frase, saida;
    int q = 0;
    while(getline(cin, frase)){
        for(int i = 0; i < (int) frase.size(); i++){
            if(frase[i] != ' '){
                if(q % 2 == 0)
                   saida += toupper(frase[i]);
                else
                   saida += tolower(frase[i]);
                q++;
            }else
                saida += frase[i];
        }
        cout << saida << endl;
        q = 0;
        saida.clear();
    }
    return 0;
}