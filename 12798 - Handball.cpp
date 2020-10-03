#include <iostream>
using namespace std;

int main(){
    int n,m,i,j,arr[101],count,flag;
    while(cin >> n >> m){
        count=0;
        for(i=1;i<=n;i++){
            flag=0;
            for(j=1;j<=m;j++){
                cin >> arr[j];
            }
            for(j=1;j<=m;j++){
                if(arr[j]<1)
                    flag=1;
            }
            if(flag==0)
                count++;
        }
        cout << count << endl;
    }
return 0;
}
