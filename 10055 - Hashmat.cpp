#include <bits/stdc++.h>
using namespace std;

int main(){
unsigned long int x,y,z;
while (cin >> x >> y){
if(x<y){

    z=y-x;
    cout << z << endl;
}
else{
    z=x-y;
    cout << z << endl;
}
}
return 0;
}
