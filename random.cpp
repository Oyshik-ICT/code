#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x;
    cin>>n>>m;
    x=n%m;
    cout << x<< "\n";
    if(x<0){
        x+=m;
    }
    cout<<x<<"\n";
}
