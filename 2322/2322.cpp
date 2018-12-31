#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, value;
    bool flag = false;
    vector<int> vet;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> value;
        vet.push_back(value);
    }
    std::sort(vet.begin(), vet.end());
    for(int i = 0; i < (int)vet.size(); i++){
        if(i + 1 != vet[i]){
            cout << i+1 <<endl;
            flag = true;
            break;
        }
    }
    if(!flag)
        cout << n << endl;
    return 0;
}