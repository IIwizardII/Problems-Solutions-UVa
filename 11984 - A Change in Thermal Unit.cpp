#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t,i,j,c,temp;
    //freopen("checker.txt","r",stdin);
    cin >> t;
    float convert,sum_convert,sum_cel;
    for(i=1;i<=t;i++){
        cin >> c >> temp;
        convert=((9.00*c)/5.00)+32.00;
        //cout << convert << endl;
        sum_convert=convert+temp;
        //cout << sum_convert << endl;
        sum_cel=((sum_convert-32.00)*5.00)/9.00;
        //cout << sum_cel << endl;
        printf("Case %d: %0.2f\n", i,sum_cel);
    }
return 0;
}
