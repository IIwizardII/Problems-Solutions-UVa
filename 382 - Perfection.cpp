#include <bits/stdc++.h>
using namespace std;

int main(){

    long int a,sum,i;
    cout << "PERFECTION OUTPUT" << endl;
    while(scanf("%ld",&a)==1){
            sum=0;
    if(a==0){
        cout << "END OF OUTPUT" << endl;
        break;
    }
    else{
    for(i=1;i<a;i++){
    if(a%i==0){
        sum=sum+i;
    }
    }
    if(sum==a){
        printf("%5d",a);
        printf("  PERFECT\n");
    }
    if(sum<a){
        printf("%5d",a);
        printf("  DEFICIENT\n");
    }
    if(sum>a){
       printf("%5d",a);
       printf("  ABUNDANT\n");
    }
    }
    }
return 0;
}
