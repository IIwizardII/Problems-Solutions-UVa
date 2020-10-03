#include <iostream>
#include <cstdio>
using namespace std;

int main(){
int t;
//freopen("checker.txt","r",stdin);
cin >> t;
int i,a,b,c,d;
for(i=0;i<t;i++){
    cin >> a >> b >> c;

    if(b+c<=a)
        cout << "Case " << i+1 << ": " << b+c << endl;
    if(b+c>a){
            d=b+c;
    while(1){
          d=(d)-a;
          if(d<=a)
            break;
        }
        cout << "Case " << i+1 << ": " << d << endl;
    }
}

return 0;
}
