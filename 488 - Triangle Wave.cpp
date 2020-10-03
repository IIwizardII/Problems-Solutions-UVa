#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t,a,f,i,j,k,m;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> a >> f;
        for(m=1;m<=f;m++){
            for(j=1;j<=a;j++){
                for(k=1;k<=j;k++){
                    cout << j;
                }
                cout << "\n";
            }
            for(j=a-1;j>=1;j--){
                for(k=1;k<=j;k++){
                    cout << j;
                }
                    cout << "\n";
                }
            if(m==f)
                continue;
            else
                cout << "\n";
        }
        if(i<t-1)
            cout << "\n";
    }
return 0;
}
