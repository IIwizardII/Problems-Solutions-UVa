#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long int n,k;
    while(cin >> n){
        n=(n*(n+2))/2;
        k=(n*3)-6;
        cout << k << endl;
    }
return 0;
}

