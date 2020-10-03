#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
int a,b,i;
int j=1;
while(scanf("%d",&a)==1 && a>=0){

    if(a==1 || a==0){
        cout << "Case " << j << ": " << "0" << endl;
    }
    else{
        for(i=0;i<a;i++){
           if(pow(2,i)<a && a<=pow(2,i+1)){
            cout << "Case " << j << ": " << i+1 << endl;
           }
          }
        }
    j++;
}
return 0;
}
