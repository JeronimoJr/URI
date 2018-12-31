#include <iostream>

using namespace std;

int primo(int value){
    bool flag = false;
    while(1){
        for(int i = 2; i < value; i++){
            if(value % i == 0){
                flag = true;
                break;
            }
        }
        if(flag)
            value--;
        else
            return value;
        flag = false;
    }
}
int main(){
    int n1, n2;

    cin >> n1 >> n2;
    cout << primo(n1) * primo(n2) << endl;

    return 0;
}