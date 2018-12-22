#include <iostream>
#include <math.h>

using namespace std;

bool primo(long long int n){
    if(n == 1 || n == 0)
        return false;
    for(long long int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

bool super(long long int n){
    while(n > 0){
        if(!primo(n % 10))
            return false;
        n = n/10;
    }
    return true;
}

int main(){
    long long int n;

    while(cin >> n){
        if(primo(n) && super(n))
            cout << "Super" << endl;
        else if(primo(n) && !super(n))
            cout << "Primo" << endl;
        else
            cout << "Nada" << endl;
    }

    return 0;
}