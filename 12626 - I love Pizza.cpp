#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    int k,len,m,a,r,g,i,t,test_case,count,flag;
    cin >> test_case;
    char msg[601];
    for(k=0;k<test_case;k++){
        m=0;
        a=0;
        r=0;
        g=0;
        i=0;
        t=0;
        count=0;
        flag=0;
        cin >> msg;
        len = strlen(msg);
        for(int j=0;j<len;j++){
            switch(msg[j]){
                case 'M':
                    m++;
                    continue;
                case 'A':
                    a++;
                    continue;
                case 'R':
                    r++;
                    continue;
               case 'G':
                    g++;
                    continue;
               case 'I':
                    i++;
                    continue;
               case 'T':
                    t++;
                    continue;
            }
        }
        while(flag==0){
            if(m>=1 && a>=3 && r>=2 && g>=1 && i>=1 && t>=1){
                count++;
                m=m-1;
                a=a-3;
                r=r-2;
                g=g-1;
                i=i-1;
                t=t-1;
            }
            else{
                flag=1;
            }
        }
        cout << count << endl;
    }
return 0;
}


