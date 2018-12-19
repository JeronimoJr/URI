#include <iostream>
#include <math.h>
using namespace std;

#define pi 3.1415
int main(){
    long long int raio, l; 
    double v;
    cin >> raio >> l;
    v = (4.0/3.0) * (pi * pow(raio,3));
    
    cout << (int)(l/v) << endl;
}