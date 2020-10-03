#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    freopen("checker.txt","r",stdin);
    int t;
    long long int n,j,sum;
    int i,count;
    cin >> t;
    for(i=1;i<=t;i++){
        count=0;
        sum=0;
        cin >> n;
        if(n==0){
            cout << "0\n";
        }
        else{
        for(j=1;j<=n;j++){
            sum=sum+j;
            count++;
            if(n>=sum && n<(sum+j+1)){
                cout << count << endl;
                break;
                }
            }
        }
    }
return 0;
}
