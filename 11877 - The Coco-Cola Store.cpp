#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n==0)
            break;
        if(n==3)
            cout << "1\n";
        else
            cout << n/2 << endl;
    }

return 0;
}
