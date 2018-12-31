#include <iostream>

using namespace std;

int main(){
    int km, pkm, pedagio, ppedag;

    cin >> km >> pedagio;
    cin >> pkm >> ppedag;

    cout <<  km*pkm + (km/pedagio)*ppedag << endl;
    return 0;
}