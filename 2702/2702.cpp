#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a1, a2, a3, b1, b2, b3, aux = 0;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    if(a1 < b1)
        aux += b1 - a1;
    if(a2 < b2)
        aux += b2 - a2;
    if(a3 < b3)
        aux += b3 - a3;
    cout << aux << endl;
    return 0;
}
