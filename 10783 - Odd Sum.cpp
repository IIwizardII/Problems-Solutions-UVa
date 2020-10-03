#include <bits/stdc++.h>
using namespace std;

int main(){

int t,i,j,a,b,sum;

cin >> t;



for(i=1;i<=t;i++){
    cin >> a;

    cin >> b;
    sum=0;
    for(j=a;j<=b;j=j+1){

        if(j%2!=0){
        sum=sum+j;
        }
    }
    cout << "Case " << i << ": "<< sum <<endl;
}

return 0;
}

