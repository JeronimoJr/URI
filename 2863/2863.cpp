#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    float value;
    vector<float> tempo;

    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> value;
            tempo.push_back(value);
        }
        sort(tempo.begin(), tempo.end());
        cout << tempo[0] << endl;
        tempo.clear();
    }
}