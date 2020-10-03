#include <iostream>
using namespace std;

int main(){
    int t,arr[14],i,j,flag;
    cin >> t;
    for(i=1;i<=t;i++){
        flag=0;
        for(j=0;j<13;j++){
            cin >> arr[j];
            if(arr[j]==0)
                flag=1;
        }
        if(flag==1)
            cout << "Set #" << i << ": " << "No\n";
        else
            cout << "Set #" << i << ": " << "Yes\n";
    }
return 0;
}
