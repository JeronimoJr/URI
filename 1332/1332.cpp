#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string n;
    int op;
    cin >> op;
    for(int i = 0; i < op; i++){
        cin >> n;
        if(n.size() == 5)
            cout << "3" << endl;
        else{
            if( ((n.substr(0,1) == "t") && (n.substr(1,1) == "w" || n.substr(2, 1) == "o")) ||
                ((n.substr(0,1) != "t") && ( n.substr(1,1) == "w" && n.substr(2,1) == "o")) )
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
        
    }

    return 0;
}
