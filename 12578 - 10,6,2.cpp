#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    int t,i;
    double cir,a,area,b,c;

    cin >> t;

for(i=1;i<=t;i++){
    cin >> a;

    b=(a*6)/10;
    c=(b*2)/6;
    cir=(c*c)*pi;
    area=(a*b)-cir;

    printf("%.2f",cir);
    printf(" ");
    printf("%.2f",area);
    printf("\n");

}



return 0;
}
