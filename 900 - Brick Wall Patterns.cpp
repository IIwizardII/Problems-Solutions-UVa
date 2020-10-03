#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


//long long int fib(long long int x){
//    if(x==1)
//        return x;
//    else if(x==2)
//        return 2;
//    else if(x==3)
//        return 3;
//    else if(x==4)
//        return 5;
//    else if(x==5)
//        return 8;
//    else
//        return fib(x-1)+fib(x-2);
//}


long long int fib(int n){
    long long int a=1, b=1;
    long long int i,c;
    for (i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main(){
    long long int l,sum;
    while(cin >> l){
        if(l==0)
            break;
        sum=fib(l);
        cout << sum << endl;
    }
return 0;
}


