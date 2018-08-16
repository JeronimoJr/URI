#include <iostream>
#include <vector>


using namespace std;

int main(){
  int num;
    vector<int> vet;

    for(int i = 0; i < 4; i++){
        cin >> num;
        vet.push_back(num);
    }

    for(int i = 1; i <= 4; i++){
        if(vet[i-1] == 1){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}
