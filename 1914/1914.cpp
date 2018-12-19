#include <iostream>
#include <string.h>
#include <map>
using namespace std;

int main(){
    map<string, string> jog;
    int op;
    cin >> op;

    for(int i = 0; i < op; i++){
        string n1, n2, op1, op2;
        cin >> n1 >> op1 >> n2 >> op2;
        jog[op1] = n1;
        jog[op2] = n2;
        int val1, val2;
        cin >> val1 >> val2;
        if((val1 + val2) % 2 == 0)
            cout << jog.at("PAR") << endl;
        else
            cout << jog.at("IMPAR") << endl;
    }
    return 0;
}