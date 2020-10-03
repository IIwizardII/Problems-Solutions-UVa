#include <bits/stdc++.h>
using namespace std;

int main(){

int t,i;
int a,b,c,d;
int maxim,mid,mim;
cin >> t;

for(i=1;i<=t;i++){
 cin >> a >> b >> c;
    if(b>a && c<a || c>a && b<a){
        mid=a;
    }
    else{
    if(a>b && c<b || c>b && a<b){
        mid=b;
    }
    else{
        mid=c;
    }
    }
  cout << "Case " << i << ": "<< mid << endl;

}


return 0;
}
