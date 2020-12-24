#include<bits/stdc++.h>

using namespace std;

int main()
{
    float y,sub;
    int x;
    cin>>x>>y;
    cout<<fixed;
    cout<<setprecision(2);
    if(x%5!=0 || (x+.5)>y){
        cout<<y<<endl;
    }
    else{
        sub=y-x;
        cout<<sub-.5<<endl;
    }
    return 0;
}
