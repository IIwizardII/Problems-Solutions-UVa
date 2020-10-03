#include <iostream>
#include <cstdio>
using namespace std;

int main(){
int t;
int a,s;
freopen("checker.txt","r",stdin);
cin >> t;
for(int i=1;i<=t;i++){
    cin >> a;
    s=((((((a*567)/9)+7492)*235)/47)-498);
    int c;
    c=s/10;
    s=c%10;

    if(s>0){
        cout << s << endl;
    }
    if(s<0){
        cout << -s << endl;
    }
    if(s==0){
        cout << "0\n";
    }
}
return 0;
}
