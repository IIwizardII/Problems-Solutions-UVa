#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int i,j,k,count,temp,index_i,index_j,max;
    //freopen("checker.txt","r",stdin);
    while(cin >> i >> j){
        if(i<=j){
            index_i=i;
            index_j=j;
        }
        else{
            index_i=j;
            index_j=i;
        }
        max=0;
        for(k=index_j;k>=index_i;k--){
            temp=k;
            count=1;
            while(temp!=1){
                if(temp%2==0){
                    temp=temp/2;
                    count++;
                }
                else{
                    temp=(3*temp)+1;
                    count++;
                }
            }
            if(count>=max){
                max=count;
            }
        }
        cout << i << " " << j << " " << max << endl;
    }
return 0;
}

