#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n%2==0){
        cout<<n/2<<endl;
    }
    else{
        n=(n+1)/2;
        n=n*-1;
        cout<<n<<endl;
    }

    return 0;
}
