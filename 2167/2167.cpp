#include <iostream>
#include <vector>
using namespace std;

int main(){
    int test, n,aux;
    vector<int> vet;
    bool flag = false;
    cin >> test;
    for(int i = 0; i < test; i++){
        cin >> n;
        vet.push_back(n);
    }
    for(int i = 1; i < (int) vet.size(); i++){ //1 2 2 2
       //cout << vet[i - 1] << " > " << vet[i] << endl;
        if(vet[i - 1] > vet[i]){
            flag = true;
            aux = i;
            break;
        }
    }
    if(flag)
        cout << aux+1 << endl;
    else
        cout << "0" <<endl;
    return 0;
}