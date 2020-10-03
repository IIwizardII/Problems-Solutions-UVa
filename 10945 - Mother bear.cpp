#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;


int main(){

char a[1000],b[1000];

int i,j;

while(gets(a)){
    int flag=0;
    int l=-1;
    int len=strlen(a);
    if(len==4 && a[0]=='D' && a[1]=='O' && a[2]=='N' && a[3]=='E'){
        break;
    }
    for(i=0;i<len;i++){
        if(a[i]!='.' && a[i]!=',' && a[i]!='!' && a[i]!='?' && a[i]!=' '){
            l++;
            b[l]=a[i];
        }
    }

    for(i=0;i<=l;i++){
        if(b[i]!=b[l-i] && b[i]!=(b[l-i]+32) && b[i]!=(b[l-i]-32)){
            cout << "Uh oh..\n";
            flag=1;
            break;
        }
    }

if(flag==0){
    cout << "You won't be eaten!\n";
}


}



return 0;
}
