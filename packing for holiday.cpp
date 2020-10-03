#include <iostream>
#include <cstdio>
using namespace std;

int main(){
int t;
//freopen("checker.txt","r",stdin);
cin >> t;
int l,w,h;
for(int i=0;i<t;i++){
    cin >> l >> w >> h;
    if(l<=20 && w<=20 && h<=20){
        cout << "Case " << i+1 << ": " << "good\n";
    }
    else{
        cout << "Case " << i+1 << ": " << "bad\n";
    }
}
return 0;
}
