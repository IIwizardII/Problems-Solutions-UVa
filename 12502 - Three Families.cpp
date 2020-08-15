#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){

    //freopen("test.txt", "r", stdin);

    int t, x, y, z, ans;
    double perHourRate;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> x >> y >> z;

        if(x==y){
            cout << z/2 << endl;
        }
        else if(x>y){
            perHourRate = (double)z/(x+y);
            ans = ((double)x*perHourRate+(double)(x-y)*perHourRate)+0.01;
            cout << ans << endl;
        }
        else{
            perHourRate = (double)z/(x+y);
            ans = ((double)x*(double)perHourRate-(double)(y-x)*(double)perHourRate)+0.01;
            if(ans<=0)
                cout << "0" << endl;
            else
                cout << ans << endl;
        }

    }

    return 0;
}
