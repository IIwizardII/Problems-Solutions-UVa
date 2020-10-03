#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long long int t;
    long long int i,j,s,d,k;
    //freopen("checker.txt","r",stdin);
    cin >> t;
    long long int flag,sum,dif,start,stop,maax,meen;
    for(i=0;i<t;i++){
        cin >> s >> d;
        if((s%2!=0 && d==0) || s<d || d<0 || ((s-d)%2)!=0){
            cout << "impossible\n";
        }
        else{
            flag=0;
            sum=s;
            dif=d;
            start=s;
            stop=0;
            while(flag==0){
                if(start<=0)
                    break;
                if((start+stop)==sum && abs((start-stop)==dif)){
                    flag=1;
                    break;
                }
                start=start-1;
                stop=stop+1;
            }
            if(start>=stop){
                maax=start;
                meen=stop;
            }
            if(start<stop){
                maax=stop;
                meen=start;
            }
            if(flag==1){
                cout << maax << " " << meen << endl;
            }
            else{
                cout << "impossible\n";
            }
        }
    }
return 0;
}
