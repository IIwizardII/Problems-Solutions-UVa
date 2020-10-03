#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    //freopen("checker.txt","r",stdin);
    int n,r,a,b,i,j,k;
    i=1;
    while(cin >> r >> n){
        if(r==0 &&  n==0)
            break;

        if(((n*26)+n)<r)
            cout << "Case " << i << ": impossible" << endl;
        if(((n*26)+n)>=r)
            cout << "Case " << i << ": " << (26-((((26*n)+n)-r)/n)) << endl;

        i++;
    }
return 0;
}
