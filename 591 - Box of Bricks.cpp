#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int i,j,k,div,sum,avg,result,index=1;
    //freopen("checker.txt","r",stdin);
    int n,h[101];
    while(cin >> n){
        if(n==0)
            break;
        div=n;
        sum=0;
        result=0;
        for(i=0;i<n;i++){
            cin >> h[i];
            sum=sum+h[i];
        }
        avg=sum/div;
        for(i=0;i<n;i++){
            if(h[i]>avg)
                result=result+(h[i]-avg);
        }
        cout << "Set #" << index << endl;
        cout << "The minimum number of moves is " << result << ".\n" << endl;
        index++;
    }
return 0;
}
