#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int min,a,b;

    cin>>min;
    cin>>a>>b;

    if(a+b > min)
        cout<<"Deixa para amanha!\n";
    else
        cout<<"Farei hoje!\n";

    return 0;
}
