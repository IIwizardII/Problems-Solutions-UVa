#include <iostream>
#include <cstdio>
using namespace std;

int main(){
int t;
//freopen("checker.txt","r",stdin);
cin >> t;
int a,tmp,b[1001];
float sum;
float avg,above,count;
for(int i=0;i<t;i++){
    sum=0;
    count=0;
    cin >> a;
    tmp=a;
    for(int j=0;j<a;j++){
        cin >> b[j];
        sum=sum+b[j];
    }
    avg=sum/a;
    //cout << "ds =" << avg << endl;
    for(int k=0;k<tmp;k++){
        if(b[k]>avg){
            count++;
        }
    }
    above=(count*100)/tmp;
    printf("%0.3f",above);
    cout << "%\n";

}

return 0;
}
