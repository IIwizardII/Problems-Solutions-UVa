#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
    char str[100001];int len,i,j;
    while(cin >> str){
        len=strlen(str);
        for(i=0;i<len;i++){
            printf("%c",(str[i]-7));
        }
        cout << "\n";
    }
return 0;
}
