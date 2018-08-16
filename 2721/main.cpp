#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int vetor[9],i,soma  = 0;

    for(i = 0; i < 9; i++){
        cin >> vetor[i];
        soma+= vetor[i];
    }

    if(soma%9== 0)
        cout<<"Rudolph\n";
    else if(soma%9 == 1)
        cout<<"Dasher\n";
    else if(soma%9 == 2)
        cout<<"Dancer\n";
    else if(soma%9 == 3)
        cout<<"Prancer\n";
    else if(soma%9 == 4)
        cout<<"Vixen\n";
    else if( soma%9 == 5)
        cout<<"Comet\n";
    else if(soma%9 == 6)
        cout<<"Cupid\n";
    else if(soma%9 == 7)
        cout<<"Donner\n";
    else if( soma%9 == 8)
        cout<<"Blitzen\n";

    return 0;
}
