#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;


int main(){

    //freopen("test.txt", "r", stdin);

    char str[1001];
    bool flag = true;
    int len, intArray[1001], total;

    while(flag==true){
        cin >> str;
        len = strlen(str);

        if(str[0]=='0' && len==1){
            flag = false;
            break;
        }

        for(int j=0; j<len; j++){
            intArray[j] = str[j];
            intArray[j] = intArray[j]-'0';
        }

        total = 0;
        for(int j=0; j<len; j++){
            if((j+1)%2!=0){
                total = total+intArray[j];
            }
            else{
                total = total-intArray[j];
            }
        }

        if(abs(total)%11==0)
            cout << str << " is a multiple of 11." << endl;
        else
            cout << str << " is not a multiple of 11." << endl;
    }

    return 0;
}

