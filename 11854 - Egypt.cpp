#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    while(cin >> a >> b >> c){
        if(a==0 && b==0 && c==0)
            break;
        if((c>a && c>b) && ((b>a && b<c) || (a>b && a<c))){
            if(((a*a)+(b*b))==(c*c))
                cout << "right" << endl;
            else
                cout << "wrong" << endl;
        }
        else if((b>a && b>c) && ((a>c && a<b) || (c>a && c<b))){
            if(((a*a)+(c*c))==(b*b))
                cout << "right" << endl;
            else
                cout << "wrong" << endl;
        }
        else if((a>c && a>b) && ((c>b && c<a) || (b>c && b<a))){
            if(((c*c)+(b*b))==(a*a))
                cout << "right" << endl;
            else
                cout << "wrong" << endl;
        }
        else
            cout << "wrong" << endl;
    }
return 0;
}
