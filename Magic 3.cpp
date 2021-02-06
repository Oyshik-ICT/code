#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,d,i,x,y,c=0;
    cin>>n>>s>>d;
    while(n--){
        cin>>x>>y;
        if(x<s && y>d){
            c=1;
        }
    }
    if(c==1){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }

    return 0;
}
