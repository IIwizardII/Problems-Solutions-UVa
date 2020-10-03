#include <iostream>
#include <cstdio>
using namespace std;

int main(){
   long long int t,i,a,b,c;
    //freopen("checker.txt","r",stdin);
    cin >> t;
    long long int maax,mid,meen;
    for(i=1;i<=t;i++){
        cin >> a >> b >> c;
        if((a>=b && a>=c) && (b<=a && b>=c)){
            maax=a;
            mid=b;
            meen=c;
        }
        if((a>=b && a>=c) && (c<=a && c>=b)){
            maax=a;
            mid=c;
            meen=b;
        }
        if((b>=a && b>=c) && (c<=b && c>=a)){
            maax=b;
            mid=c;
            meen=a;
        }
        if((b>=a && b>=c) && (a<=b && a>=c)){
            maax=b;
            mid=a;
            meen=c;
        }
        if((c>=b && c>=a) && (a<=c && a>=b)){
            maax=c;
            mid=a;
            meen=b;
        }
        if((c>=b && c>=a) && (b<=c && b>=a)){
            maax=c;
            mid=b;
            meen=a;
        }
        //cout << maax << " " << mid << " " << meen << endl;
        if((mid+meen)<=maax){
            cout << "Case " << i << ": " << "Invalid" << endl;
        }
        if((mid+meen)>maax){
            if(maax==mid && mid==meen)
               cout << "Case " << i << ": " << "Equilateral" << endl;
            if(maax!=mid && mid!=meen)
               cout << "Case " << i << ": " << "Scalene" << endl;
            if((maax==mid && mid!=meen) || (maax==meen && meen!=mid) || (mid==meen && meen!=maax))
               cout << "Case " << i << ": " << "Isosceles" << endl;
        }
    }
return 0;
}
