#include<iostream>

using namespace std;

int main()
{
    int n,i,num;
    double k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>num;
        k=k+num;
    }
    cout<<(double)k/n;
    return 0;
}
