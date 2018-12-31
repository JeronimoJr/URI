#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int semana, dias, n;
    vector<int> vet;
    cin >> semana >> dias;
    for(int i = 0; i < dias; i++){
        cin >> n;
        vet.push_back(n);
    }
    for(int i = 0; i < semana; i++){
        cin >> n;
       auto it = find(vet.begin(), vet.end(), n);
       if(it != vet.end()){
           cout << "0" <<endl;
       }else{
           cout <<"1"<<endl;
           vet.push_back(n);
       }
    }
    return 0;
}