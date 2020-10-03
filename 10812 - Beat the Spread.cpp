#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, s, d;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> s >> d;
        if(d>s){
            cout << "impossible" << endl;
            continue;
        }
        int flag = 0;
        for(int j=0; j<=s/2; j++){
            if(j+(s-j)==s && ((s-j)-j)==d){
                cout << max(j,(s-j)) << " " << min(j,(s-j)) << endl;
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout << "impossible" << endl;
        }
    }

    return 0;
}
