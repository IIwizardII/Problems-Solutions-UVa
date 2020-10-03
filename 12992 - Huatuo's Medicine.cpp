#include <iostream>
using namespace std;

int main(){
    int t,n,i,j,sum;
    cin >> t;
    for(i=1;i<=t;i++){
        cin >> n;
        if(n==1)
            cout << "Case #" << i << ": " << n << endl;
        else
            cout << "Case #" << i << ": " << n+(n-1) << endl;
    }
return 0;
}
