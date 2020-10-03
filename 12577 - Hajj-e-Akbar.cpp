#include <bits/stdc++.h>
using namespace std;

int main(){

char a[20];
int i;
i=1;
while(scanf("%s",a)==1){

    if(a[0]=='*'){
        break;
    }
    if(a[0]=='H' || a[0]=='h'){
        cout << "Case " << i  << ": " << "Hajj-e-Akbar" << endl;
    }
    if(a[0]=='U' || a[0]=='u'){
        cout << "Case " << i  << ": "  << "Hajj-e-Asghar" << endl;
    }
  i=i+1;
}

return 0;
}
