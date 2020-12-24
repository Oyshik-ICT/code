#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
    int a,b,c,d,big;
    cin>>a>>b>>c>>d;
    cout<<max(max(a,b),max(c,d))<<endl;
    return 0;
}
