#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int main(){
    freopen("checker.txt","r",stdin);
    int t,i,j,k,a,b,c;
    int len;
    cin >> t;
    string msg;
    //getline(cin,msg);
    cin.ignore(1);
    for(i=0;i<t;i++){
        getline(cin,msg);
        len=msg.length();
        b=sqrt(len);
        if(b*b==len){
            for(j=0;j<b;j++){
                for(k=0;k<b;k++){
                    cout << msg[k*b+j];
                }
            }
        }
        else{
            cout << "INVALID";
        }
        cout << "\n";
    }






return 0;
}
