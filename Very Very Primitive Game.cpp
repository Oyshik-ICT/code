#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && c==0){
        cout<<"Aoki"<<"\n";
    }
    else if(a==b && c==1){
        cout<<"Takahashi"<<"\n";
    }
    else if(a>b){
        cout<<"Takahashi"<<"\n";
    }
    else if(a<b){
        cout<<"Aoki"<<"\n";
    }

    return 0;
}
