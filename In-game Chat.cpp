#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,c,n;
    char s[101];
    cin>>t;
    while(t--){
        cin>>n>>s;
        c=0;
        for(i=n-1;i>=0;i--){
            if(s[i]==')'){
                c++;
            }
            else{
                break;
            }
        }
       if(c>n-c) {
            cout<<"Yes"<<"\n";
       }
       else{
        cout<<"No"<<"\n";
       }
    }

    return 0;
}
