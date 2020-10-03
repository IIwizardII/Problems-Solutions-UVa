#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int i,j,t,k,n,a[11];
    cin >> t;
    for(i=1;i<=t;i++){
        cin >> n;
        for(j=1;j<=n;j++){
            cin >> a[j];
        }
        k=n/2+1;
        cout << "Case " << i << ": " << a[k] << endl;
    }
return 0;
}

