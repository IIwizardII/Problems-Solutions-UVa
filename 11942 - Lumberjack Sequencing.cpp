#include <bits/stdc++.h>
using namespace std;

struct groups{

    int numberArray[11];
    char str[20];
};

int main(){

    freopen("test.txt", "r", stdin);

    groups object[21];
    int n;
    bool increasing, decreasing , testIncreasing, testDecreasing;

    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<10; j++){
            cin >> object[i].numberArray[j];
        }
    }

    for(int i=0; i<n; i++){
        if(object[i].numberArray[0]<object[i].numberArray[1]){
            increasing = true;
            testIncreasing = true;

            for(int j=1; j<10; j++){
                if(object[i].numberArray[j]>object[i].numberArray[j+1])
                    testIncreasing = false;
            }
            if(testIncreasing==false)
                object[i].str[0] = 'U';
            else
                object[i].str[0] = 'O';
        }
        else if(object[i].numberArray[0]>object[i].numberArray[1]){
            decreasing = true;
            testDecreasing = true;

            for(int j=1; j<10; j++){
                if(object[i].numberArray[j]<object[i].numberArray[j+1])
                    testDecreasing = false;
            }

            if(testDecreasing==true)
                object[i].str[0] = 'O';
            else
                object[i].str[0] = 'U';
        }
    }

    cout << "Lumberjacks:" << endl;
    for(int i=0; i<n; i++){
        if(object[i].str[0]=='U')
            cout << "Unordered" << endl;
        else if(object[i].str[0]=='O')
            cout << "Ordered" << endl;
    }

    return 0;
}
