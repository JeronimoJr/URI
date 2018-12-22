#include <iostream>
#include <string>
using namespace std;


bool ajuda(string name){
    int cont = 0;

     for(int i = 0; i < name.size(); i++){
            if( (name[i] < '0') || ( name[i] > '9' && name[i] <= '@') || (name[i] >= '[' && name[i] < 'a') || 
                (name[i] >= '{'))
                return false;         
    }
    for(int i = 0; i < name.size(); i++){
        if(name[i] >= 'A' && name[i] <= 'Z'){
            cont++;
            break;
        }
    }
    if(cont == 0)
        return false;
    for(int i = 0; i < name.size(); i++){
        if(name[i] >= 'a' && name[i] <= 'z'){
            cont++;
            break;
        }
    }
    if(cont == 1)
        return false;
    for(int i = 0; i < name.size(); i++){
        if(name[i] >= '0' && name[i] <= '9'){
            cont++;
            break;
        }
    }
    if(cont == 2)
        return false;
    return true;
}

int main(){
    string senha;
    int aux;
    
    while(getline(cin, senha)){   
     aux = (int) senha.size();
    if( (ajuda(senha)) && ((aux >= 6) && (aux <= 32)))
        cout << "Senha valida.\n";
    else
        cout << "Senha invalida.\n";
    }
    return 0;
}
