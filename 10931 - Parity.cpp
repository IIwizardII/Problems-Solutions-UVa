#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, arr[100], l, temp, i, count;
    while(cin >> l){
        if(l==0)
            break;

        count = 0;
        i = 0;
        while(l>0){
            temp = l%2;
            arr[i] = temp;
            i++;
            if(temp==1){
                count++;
            }
            l = l/2;
        }
        cout << "The parity of ";
        for(int j=i-1; j>-1; j--){
            cout << arr[j];
        }
        cout << " is " << count << " (mod 2)." << endl;
    }

    return 0;
}
