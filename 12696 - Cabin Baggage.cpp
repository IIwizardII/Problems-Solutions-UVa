#include <iostream>
using namespace std;

int main(){
    int t,i,count;
    float a,b,c,d;
    cin >> t;
    count=0;
    for(i=1;i<=t;i++){
        cin >> a >> b >> c >> d;
        if(a+b+c<=125.00 && d<=7.00 || a<=56.00 && b<=45.00 && c<=25.00 && d<=7.00){
            cout << "1\n";
            count++;
        }
        else
            cout << "0\n";
    }
    cout << count << endl;
return 0;
}
