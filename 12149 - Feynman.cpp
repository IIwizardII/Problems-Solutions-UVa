#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    //freopen("checker.txt","r",stdin);
    int a,sum;
    while(cin >> a){
            sum=0;
        if(a==0)
            break;

        for(int i=1;i<=a;i++)
            sum=sum+i*i;

        cout << sum << endl;

    }
return 0;
}

