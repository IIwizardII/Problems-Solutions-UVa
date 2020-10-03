#include <iostream>
using namespace std;

int main(){
int t,i;
long long int a,b,c;

cin >> t;
for(i=1;i<=t;i++){

    cin >> a;
    cin >> b;

    if(a>b){
        cout << ">\n";
    }

    else{
     if(a<b){
        cout << "<\n";
              }
     else{
        cout << "=\n";
              }
    }

}


return 0;
}
