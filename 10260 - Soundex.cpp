#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[21];
    long long int len,i,sum;
    while(cin >> str){
        sum=0;
        len=strlen(str);
        for(i=0;i<len;i++){
            if(str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V'){
                if(str[i-1]!='B' && str[i-1]!='F' && str[i-1]!='P' && str[i-1]!='V'){
                    sum=sum*10+1;
                }
            }
            else if(str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' || str[i]=='X' || str[i]=='Z'){
                if(str[i-1]!='C' && str[i-1]!='G' && str[i-1]!='J' && str[i-1]!='K' && str[i-1]!='Q' && str[i-1]!='S' && str[i-1]!='X' && str[i-1]!='Z'){
                    sum=sum*10+2;
                }
            }
            else if(str[i]=='D' || str[i]=='T'){
                if(str[i-1]!='D' && str[i-1]!='T'){
                    sum=sum*10+3;
                }
            }
            else if(str[i]=='L'){
                if(str[i-1]!='L'){
                    sum=sum*10+4;
                }
            }
            else if(str[i]=='M' || str[i]=='N'){
                if(str[i-1]!='M' && str[i-1]!='N'){
                    sum=sum*10+5;
                }
            }
            else if(str[i]=='R'){
                if(str[i-1]!='R'){
                    sum=sum*10+6;
                }
            }
        }
        if(sum>0){
            cout << sum << endl;
        }
        else{
            cout << "\n";
        }
    }

return 0;
}
