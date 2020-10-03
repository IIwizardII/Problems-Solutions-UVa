#include <iostream>
#include <cstdio>
using namespace std;

int main(){

freopen("checker.txt","r",stdin);
int a,b,c,d,count,x;
while(cin >> a >> b){
        count=0;
        x=0;
    if(a==0 && b==0)
        break;

    while(a!=0 || b!=0){
        c=a%10;
        d=b%10+x;                               //1 7 1 7 4 6 6 5 3     7 3 3 0 5 1 9 6 8
        a=a/10;
        b=b/10;
        if(c+d>9){
            count++;
            x=1;
        }
    }
    if(count==0)
        cout << "No carry operation.\n";
    else
        cout << count <<  " carry operation.\n";
}
return 0;
}
