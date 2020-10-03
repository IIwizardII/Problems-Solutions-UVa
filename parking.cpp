#include <iostream>
#include <cstdio>
using namespace std;

int main(){
int t;
cin >> t;
for(int i=0;i<t;i++){
    int n;
    cin >> n;
    int maxi=0;
    int mini=99;
    for(int j=0;j<n;j++){
        int num;
        cin >> num;
        if(num>=maxi){
            maxi=num;
        }
        if(num<=mini){
            mini=num;
        }
    }
    cout << (maxi-mini)*2 << endl;
}

return 0;
}
