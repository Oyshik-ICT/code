#include<bits/stdc++.h>

using namespace std;

int main()
{
    float V,T,S,D,t;
    cin>>V>>T>>S>>D;
    t=D/V;
    if(t>=T && S>=t){
        cout<<"No"<<"\n";
    }
    else{
        cout<<"Yes"<<"\n";
    }

    return 0;
}
