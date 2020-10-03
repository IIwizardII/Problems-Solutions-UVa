#include <bits/stdc++.h>
using namespace std;

int main(){

int t,i,j,a,n,k,p;

cin >> t;

for(i=1;i<=t;i++){

    cin >> n;
    cin >> k;
    cin >> p;

    if(n==(p+k)){
        a=n;
    }
    if(n>(p+k)){
        a=(p+k);
    }

    if(n<(p+k)){
        a=(p+k)-n;
        if(a>n){
            while(a>n){
                a=a-n;
            }
        }

    }
    cout << "Case " << i << ": " << a << endl;
}



return 0;
}
