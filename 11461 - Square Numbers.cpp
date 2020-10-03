#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int a,b,i,j,sum,mx,mn,count,root;
    while(cin >> a >> b){
        if(a==0 && b==0)
            break;
        count=0;
        if(a>=b){
            mx=a;
            mn=b;
        }
        if(a<b){
            mx=b;
            mn=a;
        }
        for(i=mn;i<=mx;i++){
            root=sqrt(i);
            if(i==root*root)
                count++;
        }
        cout << count << endl;
    }
return 0;
}
