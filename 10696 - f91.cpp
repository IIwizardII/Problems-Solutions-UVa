#include <iostream>
#include <cstdio>
using namespace std;

int f91( long int a){
     if(a>=101){
        return (a-10);
    }
    if(a<=100){
        return f91(f91(a+11));
    }
}

int main(){
long int t;
long int n;
while(scanf("%ld",&n)){
        if(n==0){
            break;
        }
    cout << "f91(" << n << ") = " << f91(n) <<endl;

}


return 0;
}
