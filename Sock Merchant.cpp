#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,i,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;){
        if(a[i]==a[i+1]){
            c++;
            i=i+2;
        }
        else{
            i++;
        }
    }
    cout<<c<<endl;

    return 0;
}
