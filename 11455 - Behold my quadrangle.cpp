#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int i,j,k,arr[4];
    int a,b,c,d;
    for(i=1;i<=t;i++){
        cin >> a >> b >>c >> d;
        if(a>=b && a>=c && a>=d){
            arr[0]=a;
            arr[1]=b;
            arr[2]=c;
            arr[3]=d;
        }
        if(b>=a && b>=c && b>=d){
            arr[0]=b;
            arr[1]=a;
            arr[2]=c;
            arr[3]=d;
        }
        if(c>=b && c>=a && c>=d){
            arr[0]=c;
            arr[1]=b;
            arr[2]=a;
            arr[3]=d;
        }
        if(d>=b && d>=c && d>=a){
            arr[0]=d;
            arr[1]=b;
            arr[2]=c;
            arr[3]=a;
        }
        if(a==b && b==c && c==d){
            cout << "square" << endl;
            //continue;
        }
        else if(a==c && b==d || a==b && c==d || a==d && b==c){
            cout << "rectangle" << endl;
            //continue;
        }
        else if(arr[0]<=(arr[1]+arr[2]+arr[3])){
            cout << "quadrangle" << endl;
            //continue;
        }
        else
            cout << "banana" << endl;
    }
return 0;
}
