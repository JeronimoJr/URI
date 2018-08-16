#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int tst,i,op,op2;

    cin>>tst;
    for(i = 0; i < tst; i++){
        cin>>op>>op2;

        if(op+op2 == 0)
                  cout<<"PROXYCITY\n";
              else if(op+op2 == 1)
                cout<<"P.Y.N.G.\n";
              else if(op+op2 == 2)
                cout<<"DNSUEY!\n";
              else if(op+op2 == 3)
                cout<<"SERVERS\n";
              else if(op+op2 == 4)
                cout<<"HOST!\n";
              else if(op+op2 == 5)
                cout<<"CRIPTONIZE\n";
              else if(op+op2 == 6)
                cout<<"OFFLINE DAY\n";
              else if(op+op2 == 7)
                cout<<"SALT\n";
              else if(op+op2 == 8)
                cout<<"ANSWER!\n";
              else if(op+op2 == 9)
                cout<<"RAR?\n";
              else
                cout<<"WIFI ANTENNAS\n";
    }

    return 0;
}

