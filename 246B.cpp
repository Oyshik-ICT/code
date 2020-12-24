#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,num,i;
    long long int sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        sum=sum+num;
    }
    if(sum%n==0){
        cout<<n<<"\n";
    }
    else{
        cout<<n-1<<"\n";
    }
    return 0;
}
