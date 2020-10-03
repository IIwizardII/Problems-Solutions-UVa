#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long int a,l,i,count,index_a,index_l,j=1;
    while(cin >> a >> l){
        index_a=a;
        index_l=l;
        count=1;
        if(a<=0 && l<=0)
            break;
        while(a<=l && a!=1){
            if(a%2==0){
                a=a/2;
                //cout << a << " ";
            }
            else{
                a=3*a+1;
                if(a>l)
                    break;
                //cout << a << " ";
            }
            count++;
        }
        cout << "Case " << j << ": " << "A = " << index_a << ", limit = " << index_l << ", number of terms = " << count << endl;
        j++;
    }

return 0;
}
