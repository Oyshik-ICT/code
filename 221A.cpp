#include<iostream>

using namespace std;

int a[1000],i=0;

void fac(int n)
{
    if(n==0){
        return;
    }
    fac(n-1);
    a[i]=n;
    i++;

    return ;

}

int main()
{
    int n;
    cin>>n;
    fac(n);
    for(int j=n-1;j>=1;j--){
        swap(a[j],a[j-1]);
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;

    return 0;
}
