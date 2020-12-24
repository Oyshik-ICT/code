#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2,a3,a4,len,i,sum=0;
    char s[100000];
    cin>>a1>>a2>>a3>>a4>>s;
    len=strlen(s);
    for(i=0;i<len;i++){
        if(s[i]=='1'){
            sum=sum+a1;
        }
        else if(s[i]=='2'){
            sum=sum+a2;
        }
        else if(s[i]=='3'){
            sum=sum+a3;
        }
        else if(s[i]=='4'){
            sum=sum+a4;
        }
    }
    cout<<sum<<"\n";

    return 0;
}
