#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string bits;
    int zero = 0;
    cin >> bits;
    for(int i = 0; i < (int)bits.size(); i++){
        if(bits[i] == '1')
            zero++;
    }
    if(zero % 2 == 0)
        cout << bits+'0'<<endl;
    else
        cout << bits+'1'<<endl;
        
    return 0;
}