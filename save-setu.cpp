#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    //freopen("checker.txt","r",stdin);
    int t;
    cin >> t;
    int i,j,k;
    int sum=0;
    char a[10];
    for(i=0;i<t;i++){
        cin >> a;
        if(a[0]=='d'){
            cin >> k;
            sum=sum+k;
        }
        if(a[0]=='r')
            cout << sum << endl;

    }

return 0;
}
