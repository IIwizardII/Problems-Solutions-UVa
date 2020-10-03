#include <bits/stdc++.h>
using namespace std;

vector <int> arr;

int main(){

    int n, a;
    while(cin >> n){
        if(n==0)
            break;

        for(int i=0; i<n; i++){
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            cout << arr[i];
            if(i==arr.size()-1)
                continue;
            else
                cout << " ";
        }
        cout << endl;
        arr.clear();
    }

    return 0;
}

