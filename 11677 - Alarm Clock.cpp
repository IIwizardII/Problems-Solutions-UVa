#include <iostream>
using namespace std;

int main(){
    int h1,m1,h2,m2,min1,min2;
    while(cin >> h1 >> m1 >> h2 >> m2){
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        min1=h1*60+m1;
        min2=h2*60+m2;
        if(min1<=min2){
            cout << min2-min1 << endl;
        }
        if(min1>min2){
            cout << (1440-min1)+min2 << endl;
        }
    }
return 0;
}
