#include <iostream>
using namespace std;

int main(){

    int t,arr[6],i,count;
    while(cin >> t){
        count=0;
        for(i=0;i<5;i++)
            cin >> arr[i];
        for(i=0;i<5;i++){
            if(arr[i]==t)
                count++;
        }
        cout << count << endl;
    }
return 0;
}
