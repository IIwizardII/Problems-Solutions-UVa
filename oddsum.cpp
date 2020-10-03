#include <iostream>
using namespace std;

int main(){
int t;
cin >> t;
int a,b;
for(int i=0;i<t;i++){
    int sum=0;
    cin >> a >> b;
    for(int j=a;j<=b;j++){
        if(j%2!=0){
            sum=sum+j;
        }
    }
    cout << "Case " << i+1 << ": " << sum << endl;
}
return 0;
}
