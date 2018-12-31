#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long int value, cont = 1;

    while(cin >> value){
        if(value == 0)
            break;
        cout << "Teste " << cont << endl;
        cout << (long int)pow(2,value)-1 << endl;
        cout << endl;
        cont++;
    }
    return 0;
}