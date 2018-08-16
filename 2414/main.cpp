#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int num, maior;
    maior = -1;

    do{
        cin>>num;
        if(num > maior)
            maior = num;
    }while(num != 0);

    cout<<maior<<"\n";
    return 0;
}
