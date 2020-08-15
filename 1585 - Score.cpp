#include <iostream>
#include <cstring>

using namespace std;

int main(){

    //freopen("test.txt", "r", stdin);

    long long int t;
    char str[101];
    int len, prev, curr, ans;
    cin >> t;

    for(long long int i=0; i<t; i++){
        cin >> str;
        len = strlen(str);
        prev = 0;
        ans = 0;
        for(int j=0; j<len; j++){
            if(str[j]=='O'){
                curr = 1;
                ans = ans+(curr+prev);
                prev = curr+prev;
            }
            else{
                prev = 0;
            }

        }
        cout << ans << endl;
    }

    return 0;
}
