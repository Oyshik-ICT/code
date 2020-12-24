#include<iostream>

using namespace std;
int main()
{
    int n,i;
    long long long  int fac=1;
    cin>>n;
    for(i=1;i<=n;i++){
        fac=fac*i;
    }
    cout<<fac;
    return 0;
}
