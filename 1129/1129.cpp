#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int testes, a, b, c, d, e, aux, cont = 0, pux;
    vector<int> vet;
    while(cin >> testes){
            if(testes == 0)
                break;
        for(int i = 0; i < testes; i++){
            cin >> a >> b >> c >> d >> e;
            vet.push_back(a);
            vet.push_back(b);
            vet.push_back(c);
            vet.push_back(d);
            vet.push_back(e);
            aux = *min_element(vet.begin(), vet.end());
            for(int i = 0; i < (int)vet.size(); i++){
                if(vet[i] <= 127)
                    cont++;
                if(aux == vet[i])
                    pux = i;
            }
            if(cont > 1 || cont == 0)
                cout << "*" << endl;
            else{
                if(pux == 0)
                    cout << "A"<< endl;
                else if(pux == 1)
                    cout << "B" << endl;
                else if(pux == 2)
                    cout << "C" << endl;
                else if(pux == 3)
                    cout << "D" << endl;
                else if(pux == 4)
                    cout << "E" << endl;
            }
            //cout << aux << endl;
            vet.clear();
            pux = cont = 0;
        }
    }
    return 0;
}