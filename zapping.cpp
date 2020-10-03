#include <iostream>
#include <cstdio>
using namespace std;

int main(){
int a,b;
while(cin >> a >> b){
    if(a==-1 && b==-1)
        break;
    if(a>b){
        if(a-b>=50){
            cout << (b+100)-a << endl;
        }
        else{
            cout << a-b << endl;
        }
    }
    if(a<b){
        if(b-a>=50){
            cout << (a+100)-b << endl;
        }
        else{
            cout << b-a << endl;
        }
    }
    if(a==b){
        cout << "0\n";
    }
}
return 0;
}
