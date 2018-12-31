#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int testes, alunos, n, aux, a, menor;
    vector<int> vet;
    vector<int> gambi;
    bool flag = false;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> alunos >> n;
        for(int i = 0; i < alunos; i++){
            cin >> a;
            vet.push_back(a);
        }
        for(int i = 0; i < alunos; i++){
            if(n == vet[i]){
                aux = i;
                flag = true;
                break;
            }
            gambi.push_back(abs(n-vet[i]));
        }
            if(!flag){
                menor = gambi[0];
                aux = 0;
                for(int i = 1; i < alunos; i++){
                    if(gambi[i] < menor){
                        menor = gambi[i];
                        aux = i;
                    }
                }
            }
        cout << aux+1 << endl;
        vet.clear();
        gambi.clear();
        flag = false;
    }
    return 0;
}