#include <iostream>
using namespace std;

int main(){
    int n1, n2;

    cin >> n1 >> n2;
    if( 3 <= n2 && n2 <= 96 && n2 > n1 ) 
        cout <<"crescente\n";
    else if( 3 <= n2 && n2 <= 96 && n2 < n1 ) 
        cout<<"minguante\n";
    else if( 0 <= n2 && n2 <= 2 ) 
        cout<<"nova\n";	
    else if( 97 <= n2 && n2 <= 100 ) 
        cout<<"cheia\n";
        
    return 0;
}
