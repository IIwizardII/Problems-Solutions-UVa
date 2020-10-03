//#include <bits/stdc++.h>
//using namespace std;
#include <stdio.h>
int main(){

long long int a,b,c,i;

while(scanf("%lld",&a)==1){
    c=1;
        //cin >> a;
     if(a<0){
        break;
     }
//while(scanf("%ld",&a)>0){
       else{
        for(i=1;i<=a;i++){
        c=c+i;
        }
        //cout << c << endl;
        printf("%lld",c);
        printf("\n");
}

}
return 0;

}
