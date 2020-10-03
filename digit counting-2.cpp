#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t,a,b,h,c;
    //freopen("checker.txt","r",stdin);
    int d[10];
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a;
        for(int j=0;j<10;j++){
            d[j]=0;
        }
        for(int f=1;f<=a;f++){
                h=f;
            while(h!=0){
                b=h%10;
                d[b]++;
                h=h/10;
            }
        }
        for(int j=0;j<9;j++)
            cout << d[j] << " ";

        cout << d[9];
        cout << endl;
    }

return 0;
}

