#include <iostream>
#include <cstring>
using namespace std;

int main(){
char a[10001];
int i=1;
int len;
while(cin >> a){
    if(a[0]=='#')
    break;

    len=strlen(a);

        if(a[0]=='H' && a[1]=='E' && a[2]=='L' && a[3]=='L' && a[4]=='O' && len==5)
            cout << "Case " << i << ": ENGLISH" << endl;

        else if(a[0]=='H' && a[1]=='O' && a[2]=='L' && a[3]=='A' && len==4)
            cout << "Case " << i << ": SPANISH" << endl;

        else if(a[0]=='H' && a[1]=='A' && a[2]=='L' && a[3]=='L' && a[4]=='O' && len==5)
            cout << "Case " << i << ": GERMAN" << endl;

        else if(a[0]=='B' && a[1]=='O' && a[2]=='N' && a[3]=='J' && a[4]=='O' && a[5]=='U' && a[6]=='R' && len==7)
            cout << "Case " << i << ": FRENCH" << endl;

        else if(a[0]=='C' && a[1]=='I' && a[2]=='A' && a[3]=='O' && len==4)
            cout << "Case " << i << ": ITALIAN" << endl;

        else if(a[0]=='Z' && a[1]=='D' && a[2]=='R' && a[3]=='A' && a[4]=='V' && a[5]=='S' && a[6]=='T' && a[7]=='V' && a[8]=='U' && a[9]=='J' && a[10]=='T' && a[11]=='E' && len==12)
            cout << "Case " << i << ": RUSSIAN" << endl;

        else
            cout << "Case " << i << ": UNKNOWN" << endl;

    i++;
}


return 0;
}

