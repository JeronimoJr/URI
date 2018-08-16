#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;

    getline(cin,name);

    if(name.compare("para") == 0 || name.compare("roraima") == 0 || name.compare("amazonas") == 0 || name.compare("acre") == 0
            || name.compare("rondonia") == 0 || name.compare("amapa") == 0  || name.compare("tocantins") == 0 )
        cout<<"Regiao Norte\n";
    else
    cout << "Outra regiao\n";

    return 0;
}
