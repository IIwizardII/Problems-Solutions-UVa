#include <iostream>
using namespace std;

int main(){
    int i,j,k,sum,avg,a[8];
    int t;
    cin >> t;
    for(i=1;i<=t;i++){
        sum=0;
        for(j=1;j<=7;j++){
            cin >> a[j];
        }
        if(a[5]<=a[6] && a[5]<=a[7])
            avg=(a[6]+a[7])/2;
        if(a[6]<=a[5] && a[6]<=a[7])
            avg=(a[5]+a[7])/2;
        if(a[7]<=a[6] && a[7]<=a[5])
            avg=(a[6]+a[5])/2;

        for(j=1;j<=4;j++){
            sum=sum+a[j];
        }
        sum=sum+avg;
        if(sum>=90)
            cout << "Case " << i << ": " << "A\n";
        if(sum>=80 && sum<90)
            cout << "Case " << i << ": " << "B\n";
        if(sum>=70 && sum<80)
            cout << "Case " << i << ": " << "C\n";
        if(sum>=60 && sum<70)
            cout << "Case " << i << ": " << "D\n";
        if(sum<60)
            cout << "Case " << i << ": " << "F\n";
        }
return 0;
}
